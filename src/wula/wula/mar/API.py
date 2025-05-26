#!/usr/bin/env python3
# coding=utf-8

import json
import rclpy
from rclpy.node import Node
from tku_msgs.msg import Interface,SensorPackage,SensorSet,Dio
from std_msgs.msg import Int16, String
from sensor_msgs.msg import Image

class Sendmessage(Node):
    def __init__(self):
        super().__init__('send_message_node')
        self.yaw = 0.0
        self.pitch = 0.0
        self.roll = 0.0
        self.object_count = 0
        self.object_sizes = []
        self.object_x_min = []
        self.object_x_max = []
        self.object_y_min = []
        self.object_y_max = []
        # Publishers
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

        # Subscriber: FPGA ack
        self.dio_sub = self.create_subscription(
            Dio,
            '/package/FPGAack',
            self.dio_callback,
            1
        )
        # Subscriber: object info JSON
        self.object_info_sub = self.create_subscription(
            String,
            'object_info',
            self.object_info_callback,
            10
        )

        self.imu_sub = self.create_subscription(
            SensorPackage,
            '/package/sensorpackage',
            self.imu,
            10
        )

        self.label_mask = self.create_subscription(
            Image,
            'mask_image',
            self.label_mask_callback,
            10
        )

        # State variables
        self.is_start = False
        self.last_objects = []  # store received object info

    # def object_info_callback(self, msg: String):
    #     """
    #     接收從 image node 發出的物件資訊 JSON，解析並儲存
    #     """
    #     try:
    #         objs = json.loads(msg.data)
    #         self.last_objects = objs
    #         self.get_logger().info(f"Received object info: {objs}")
    #     except json.JSONDecodeError as e:
    #         self.get_logger().error(f"Failed to parse object_info JSON: {e}")

    def label_mask_callback(self, msg: Image):
        """
        接收 label_mask 圖像，這裡可以根據需要進行處理
        """
        self.label_mask = msg.data
        # 假設 msg.mask 是一個表示 mask 的數組或其他結構
        # 這裡我們只記錄 mask 的大小，實際應用中可能需要進一步處理
        # 例如，將 mask 的大小記錄到日誌中
        # self.get_logger().info(f"Received label_mask image with size: {msg.data}")
        # self.mask = msg.mask
        # self.get_logger().info(f"Received label_mask image with size: {self.mask}")

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


    def sendbodyAuto(self, gernerate):
        msg = Int16()
        msg.data = gernerate 
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
        接收 FPGA ack，更新 is_start flag
        """
        self.is_start = True if msg.data == 1 else False
        # self.get_logger().info(f'Received ack: {msg.data}, is_start={self.is_start}')

    def object_info_callback(self, msg: String):
        """
        接收從 image node 發出的物件資訊 JSON，解析並儲存：
        - self.object_count
        - self.object_sizes
        - self.object_x_min, x_max, y_min, y_max
        """
        try:
            objs = json.loads(msg.data)  # objs: list of dict
        except json.JSONDecodeError as e:
            self.get_logger().error(f"Failed to parse object_info JSON: {e}")
            return

        # 1) 物件數量
        count = len(objs)

        # 2) 清空原有儲存
        sizes   = []
        x_mins  = []
        x_maxs  = []
        y_mins  = []
        y_maxs  = []

        # 3) 逐一拆解
        for o in objs:
            x, y, w, h = o['bbox']      # bbox = [x, y, w, h]
            area       = o['area']      # 面積

            # 計算 min/max
            x_min = x
            x_max = x + w
            y_min = y
            y_max = y + h

            # 存到 list
            sizes.append(area)
            x_mins.append(x_min)
            x_maxs.append(x_max)
            y_mins.append(y_min)
            y_maxs.append(y_max)

        # 4) 存回成員變數，供後續使用
        self.object_count  = count
        self.object_sizes  = sizes
        self.object_x_min  = x_mins
        self.object_x_max  = x_maxs
        self.object_y_min  = y_mins
        self.object_y_max  = y_maxs

def main(args=None):
    rclpy.init(args=args)
    node = Sendmessage()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
