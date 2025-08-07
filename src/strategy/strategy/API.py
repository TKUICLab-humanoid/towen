#!/usr/bin/env python3
# coding=utf-8
import json
import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from std_msgs.msg import String, UInt8MultiArray, Int16
from tku_msgs.msg import (
    Interface,
    SensorPackage,
    SensorSet,
    Dio,
    DrawImage,
    HeadPackage,
    SingleMotorData,
)
from rclpy.duration import Duration
from geometry_msgs.msg import Point


class API(Node):
    # 顏色索引常量
    ORANGE, YELLOW, BLUE, GREEN, BLACK, RED, WHITE, OTHERS = range(8)
    COLORS = ['orange', 'yellow', 'blue', 'green', 'black', 'red', 'white', 'others']

    def __init__(self, node_name: str = 'API'):
        super().__init__(node_name)

        # 建立兩個 callback group：IMU 與影像分流
        self.imu_cbg = ReentrantCallbackGroup()
        self.image_cbg = ReentrantCallbackGroup()

        # IMU 資料 publisher
        self.imu_reset_pub = self.create_publisher(
            SensorSet, '/sensorset', 10
        )

        # FPGA ack 訂閱 (較低頻)
        self.dio_sub = self.create_subscription(
            Dio,
            '/package/FPGAack',
            self.dio_callback,
            1,
            callback_group=self.imu_cbg,
        )

        # IMU 訂閱 (高頻)：放到 imu_cbg
        self.imu_sub = self.create_subscription(
            SensorPackage,
            '/package/sensorpackage',
            self.imu,
            10,
            callback_group=self.imu_cbg,
        )

        self.yolo_zed = self.create_subscription(
            Point,
            '/zed_yolo_ball',
            self.Yolo_Zed,
            10,
            callback_group=self.imu_cbg,
        )

        # 影像與物件資訊 publisher/subscriber：放到 image_cbg
        self.object_info_sub = self.create_subscription(
            String,
            'object_info',
            self.object_info_callback,
            10,
            callback_group=self.image_cbg,
        )
        self.mask_sub = self.create_subscription(
            UInt8MultiArray,
            'label_matrix',
            self.mask_matrix_callback,
            10,
            callback_group=self.image_cbg,
        )

        # 各色 mask topic 訂閱
        self.latest_masks = {c: None for c in self.COLORS}
        for c in self.COLORS:
            topic = f'{c}_mask'
            self.create_subscription(
                UInt8MultiArray,
                topic,
                lambda msg, label=c: self._mask_callback(msg, label),
                10,
                callback_group=self.image_cbg,
            )
            self.get_logger().info(f'Subscribed to {topic}')

        # Publishers for control outputs
        self.singlemotor_pub = self.create_publisher(
            SingleMotorData, '/package/SingleMotorData', 10
        )
        self.generate_pub = self.create_publisher(
            Int16, '/ContinousMode_Topic', 10
        )
        self.continous_pub = self.create_publisher(
            Interface, '/ChangeContinuousValue_Topic', 10
        )
        self.head_motor_pub = self.create_publisher(
            HeadPackage, '/package/HeadMotor', 10
        )
        self.sector_pub = self.create_publisher(
            Int16, '/package/Sector', 10
        )
        self.draw_image_pub = self.create_publisher(
            DrawImage, '/drawimage', 10
        )

        # 狀態旗標
        self.is_start = False
        self.color_counts = [0] * len(self.COLORS)
        self.object_sizes = [[] for _ in self.COLORS]
        self.object_x_min = [[] for _ in self.COLORS]
        self.object_x_max = [[] for _ in self.COLORS]
        self.object_y_min = [[] for _ in self.COLORS]
        self.object_y_max = [[] for _ in self.COLORS]
        self.new_object_info = False

    def _mask_callback(self, msg: UInt8MultiArray, label: str):
        dims = msg.layout.dim
        if len(dims) < 2:
            self.get_logger().error("mask_matrix layout 格式錯誤")
            return
        rows = dims[0].size
        cols = dims[1].size
        arr = np.array(msg.data, dtype=np.uint8).reshape((rows, cols))
        self.latest_masks[label] = arr

    def get_mask_by_color(self, color: str) -> np.ndarray | None:
        """回傳最新一幀指定色彩的 mask；如果還沒收到就回 None"""
        return self.latest_masks.get(color)

    def mask_matrix_callback(self, msg: UInt8MultiArray):
        dims = msg.layout.dim
        if len(dims) < 2:
            self.get_logger().error("mask_matrix layout 格式錯誤")
            return
        rows, cols = dims[0].size, dims[1].size
        try:
            arr = np.array(msg.data, dtype=np.uint8).reshape((rows, cols))
            self.label_matrix = arr
            self.label_matrix_flatten = arr.flatten()
        except Exception as e:
            self.get_logger().error(f"無法還原 mask_matrix：{e}")

    def object_info_callback(self, msg: String):
        try:
            data = json.loads(msg.data)
            if isinstance(data, str):
                data = json.loads(data)
        except Exception as e:
            self.get_logger().error(f"Failed to parse object_info JSON: {e}")
            return

        self.color_counts = [0] * len(self.COLORS)
        for lst in (
            self.object_sizes,
            self.object_x_min,
            self.object_x_max,
            self.object_y_min,
            self.object_y_max,
        ):
            for sub in lst:
                sub.clear()

        for idx, color in enumerate(self.COLORS):
            entry = data.get(color, [])
            if isinstance(entry, dict):
                entry = [entry]
            if not isinstance(entry, list):
                continue

            self.color_counts[idx] = len(entry)
            for o in entry:
                try:
                    x, y, w, h = o['bbox']
                    area = o['area']
                except Exception as ex:
                    self.get_logger().warn(f"Malformed object for color {color}: {ex}")
                    continue
                self.object_sizes[idx].append(area)
                self.object_x_min[idx].append(x)
                self.object_x_max[idx].append(x + w)
                self.object_y_min[idx].append(y)
                self.object_y_max[idx].append(y + h)

        total = sum(self.color_counts)
        self.get_logger().debug(f"[object_info] total={total}, by_color={self.color_counts}")
        self.new_object_info = True

    def dio_callback(self, msg: Dio):
        self.is_start = bool(msg.strategy)
        self.dio = msg.data

    def imu(self, msg: SensorPackage):
        self.roll = msg.roll
        self.pitch = msg.pitch
        self.yaw = msg.yaw
        self.imu_rpy = [self.roll,self.pitch,self.yaw]

    def Yolo_Zed(self, msg: Point) :
        self.pose_x = msg.x
        self.pose_y = msg.y
        self.pose_z = msg.z
        self.pose = [self.pose_x,self.pose_y,self.pose_z]
        
    def sendSensorReset(self, status: bool):
        rst = SensorSet()
        rst.reset = status
        self.imu_reset_pub.publish(rst)

    def sendbodyAuto(self, generate: int):
        m = Int16()
        m.data = generate
        self.generate_pub.publish(m)

    def sendContinuousValue(self, x: float, y: float, theta: float):
        m = Interface()
        m.x, m.y, m.theta = x, y, theta
        self.continous_pub.publish(m)

    def sendBodySector(self, sector: int):
        m = Int16()
        m.data = sector
        self.sector_pub.publish(m)

    def sendSingleMotor(self, ID: int, Position: int, Speed: int):
        m = SingleMotorData()
        m.id, m.position, m.speed = ID, Position, Speed
        self.singlemotor_pub.publish(m)

    def sendHeadMotor(self, ID: int, Position: int, Speed: int):
        m = HeadPackage()
        m.id, m.position, m.speed = ID, Position, Speed
        self.head_motor_pub.publish(m)

    def drawImageFunction(
        self, cnt: int, mode: int,
        xmin: int, xmax: int, ymin: int, ymax: int,
        r: int, g: int, b: int
    ):
        img = DrawImage()
        img.cnt = cnt
        img.mode = mode
        img.xmin, img.xmax = xmin, xmax
        img.ymin, img.ymax = ymin, ymax
        img.rvalue, img.gvalue, img.bvalue = r, g, b
        self.draw_image_pub.publish(img)
    def time_sleep(self, second:float):
        self.get_clock().sleep_for(Duration(seconds=second))