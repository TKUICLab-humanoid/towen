#!/usr/bin/env python3
# coding=utf-8
import json
import rclpy
from rclpy.node import Node
from std_msgs.msg import String,UInt8MultiArray,Int16
from tku_msgs.msg import Interface,SensorPackage,SensorSet,Dio,DrawImage

import numpy as np

class API(Node):
    # 顏色索引常量
    ORANGE, YELLOW, BLUE, GREEN, BLACK, RED, WHITE, OTHERS = range(8)
    COLORS = ['orange', 'yellow', 'blue', 'green', 'black', 'red', 'white', 'others']

    def __init__(self, node_name: str = 'API'):
        super().__init__(node_name)

        # 各顏色獨立儲存 bounding box 參數和面積
        self.color_counts    = [0] * len(self.COLORS)
        self.object_sizes  = [[] for _ in self.COLORS]
        self.object_x_min  = [[] for _ in self.COLORS]
        self.object_x_max  = [[] for _ in self.COLORS]
        self.object_y_min  = [[] for _ in self.COLORS]
        self.object_y_max  = [[] for _ in self.COLORS]

        self.object_info_sub = self.create_subscription(
            String,
            'object_info',
            self.object_info_callback,
            10
        )

        self.mask_sub = self.create_subscription(
            UInt8MultiArray,
            'label_matrix',
            self.mask_matrix_callback,
            10
        )

        self.generate_pub = self.create_publisher(
            Int16,
            '/ContinousMode_Topic',
            10
        )
        self.continous_pub = self.create_publisher(
            Interface,
            '/ChangeContinuousValue_Topic',
            10
        )
        self.sector_pub = self.create_publisher(
            Int16,
            '/package/Sector',
            10
        )

        self.imu_reset_pub = self.create_publisher(
            SensorSet,
            '/sensorset',
            10
        )
        self.draw_image_pub = self.create_publisher(
            DrawImage,
            "/drawimage",
            10)
        # Subscriber: FPGA ack
        self.dio_sub = self.create_subscription(
            Dio,
            '/package/FPGAack',
            self.dio_callback,
            1
        )
        self.imu_sub = self.create_subscription(
            SensorPackage,
            '/package/sensorpackage',
            self.imu,
            10
        )
        self.is_start = False
    def drawImageFunction(self,cnt,mode,xmin,xmax,ymin,ymax,r,g,b):
    #影像繪圖(mode 0:直線,mode 1:矩形)
        ImageData = DrawImage()
        ImageData.cnt = cnt
        ImageData.xmax = xmax
        ImageData.xmin = xmin
        ImageData.ymax = ymax
        ImageData.ymin = ymin
        ImageData.rvalue = r
        ImageData.gvalue = g
        ImageData.bvalue = b
        ImageData.mode = mode
        self.draw_image_pub.publish(ImageData)

    def mask_matrix_callback(self,msg: UInt8MultiArray):
        # 1) 讀出 layout 裡的 row, col
        dims = msg.layout.dim
        if len(dims) < 2:
            self.get_logger().error("mask_matrix layout 格式錯誤")
            return
        rows = dims[0].size
        cols = dims[1].size

        # 2) data 轉 numpy flatten，再 reshape
        try:
            arr = np.array(msg.data, dtype=np.uint8)
            self.label_matrix = arr.reshape((rows, cols))
            self.label_matrix_flatten = self.label_matrix.flatten()
            # self.get_logger().info(f"mask:\n{label_matrix_flatten}")

        except Exception as e:
            self.get_logger().error(f"無法還原 mask_matrix：{e}")
            return

        # 3) 存起來，或直接 log
        # self.latest_mask = mask
        # self.get_logger().info(f"收到 mask_matrix: {rows}×{cols}")

        # 如果想印出前幾行方便檢查：
        # self.get_logger().debug(f"mask 前5行:\n{mask[:5, :5]}")

    def object_info_callback(self, msg: String):
        raw = msg.data
        # 解析 JSON，處理可能的雙層編碼
        try:
            data = json.loads(raw)
            if isinstance(data, str):
                data = json.loads(data)
        except Exception as e:
            self.get_logger().error(f"Failed to parse object_info JSON: {e}")
            return

        # 重置所有列表
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

        # 按顏色分類填入資料
        for idx, color in enumerate(self.COLORS):
            entry = data.get(color, [])
            # 將 dict 轉成 list 統一處理
            if isinstance(entry, dict):
                entry = [entry]
            if not isinstance(entry, list):
                continue

            self.color_counts[idx] = len(entry)
            for o in entry:
                try:
                    x, y, w, h = o['bbox']
                    area      = o['area']
                except (KeyError, ValueError, TypeError) as ex:
                    self.get_logger().warn(f"Malformed object for color {color}: {ex}")
                    continue
                
                # 儲存面積與座標參數
                self.object_sizes[idx].append(area)
                self.object_x_min[idx].append(x)
                self.object_x_max[idx].append(x + w)
                self.object_y_min[idx].append(y)
                self.object_y_max[idx].append(y + h)

        total = sum(self.color_counts)
        self.get_logger().debug(
            f"[object_info] total={total}, by_color={self.color_counts}"
        )

    def reset(self,status):
        msg = SensorSet()
        msg.reset = status
        self.imu_reset_pub.publish(msg)

    def imu(self, msg: SensorPackage):
        """
        接收 IMU 資料，並根據 mode 發送不同的訊息
        """
        self.roll = msg.roll
        self.pitch = msg.pitch
        self.yaw = msg.yaw
        # self.get_logger().info(f'Received IMU data: roll={self.roll}, pitch={self.pitch}, yaw={self.yaw}')

    def sendbodyAuto(self, generate):
        msg = Int16()
        msg.data = generate 
        self.generate_pub.publish(msg)
        # self.get_logger().info('Sent message to /SendBodyAuto_Topic')

    def sendContinuousValue(self, x, y, theta):
        msg = Interface()
        msg.x = x
        msg.y = y
        msg.theta = theta
        self.continous_pub.publish(msg)
        # self.get_logger().info('Sent message to /ChangeContinuousValue_Topic')

    def sendBodySector(self, sector: int):
        msg = Int16()
        msg.data = sector
        self.sector_pub.publish(msg)
        # self.get_logger().info(f'Sent message to /package/Sector: {sector}')

    def dio_callback(self,msg):
        # print("aaaaaa")
        
        """
        接收 dio ack，更新 is_start flag
        """
        self.is_start = True if msg.strategy else False
        self.dio = msg.data
