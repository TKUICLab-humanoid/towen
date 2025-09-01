#!/usr/bin/env python3
import rclpy
import os
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import cv2
import numpy as np
from strategy.API import API
from rclpy.executors import MultiThreadedExecutor

FOCUS_MATRIX = [
     1, 1, 2, 3, 4, 5, 6,
     7, 7, 8, 8, 9,10,11,
    12,14,14,12,
    11,10, 9, 8, 8, 7, 7,
     6, 5, 4, 3, 2, 1, 1
]


MAX_FORWARD_X = 6000
MAX_FORWARD_Y = 0
MAX_FORWARD_THETA = 0

TURN_RIGHT_X = -300
TURN_RIGHT_Y = 0
TURN_RIGHT_THETA = -5

IMU_RIGHT_X = 0
IMU_RIGHT_Y = 0

TURN_LEFT_X = -300
TURN_LEFT_Y = 0
TURN_LEFT_THETA = 5

IMU_LEFT_X = -100
IMU_LEFT_Y = 0

class Strategy(API):
    def __init__(self):
        super().__init__('obs')
        self.get_logger().info('Strategy node started')
        self.bridge = CvBridge()
        self.image_sub = self.create_subscription(
            Image, 'build_image', self.convert, 10
        )
        self.create_timer(0.05, self.run)
        self.depth = [24] * 32   
        self.deep_x = 0
        self.status = 'preturn_R'
        self.pre_status = ''
        self.imu_ok = False
        self.body_auto = False
        self.now_speed = 0
        self.speed_x = 0
        self.left_deep_sum = 0
        self.right_deep_sum = 0
        self.initial()

    def initial(self):
        self.pre_status = ''
        self.imu_ok = False
        self.body_auto = False
        self.now_speed = 0
        self.speed_x = 0
        self.sendHeadMotor(1, 2048, 50)
        self.sendHeadMotor(2, 1300, 50)
        self.sendSensorReset(True)
        self.sp_hand_up = False
        self.sp_hand_down = False
        self.sp_stand = True

    def convert(self, msg: Image):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        except CvBridgeError as e:
            self.get_logger().error(f'CvBridge error: {e}')
            return
        self.red_width = 0
        self.Deep_Matrix = []
        cv_image = cv2.resize(cv_image, (320, 240))
        cv_image_2 = cv2.resize(cv_image, (32, 24))
        for compress_width in range(0, 32):
            self.r = True
            self.Deep_Matrix.append(0)
            for compress_height in range(23, -1, -1):
                b = cv_image_2.item(compress_height, compress_width, 0)
                g = cv_image_2.item(compress_height, compress_width, 1)
                r = cv_image_2.item(compress_height, compress_width, 2)
                if (b == 128 and g == 0 and r == 128) or (b ==128 and g ==128 and r ==0):
                    self.Deep_Matrix[compress_width] = 23 - compress_height
                    break
                if b == 255 and g == 255 and r == 0:
                    self.Deep_Matrix[compress_width] = 18 - compress_height
                    break
                if compress_height == 0:
                    self.Deep_Matrix[compress_width] = 24
        self.depth = self.Deep_Matrix
        return self.depth

    def walk_switch(self):
        if self.body_auto:
            self.sendbodyAuto(0)
            self.body_auto = False
        else:
            self.sendbodyAuto(1)
            self.body_auto = True

    def calculate(self):

        # ----------------Filter_matrix-------------------
        filter_matrix = [max(0, a - b) for a, b in zip(FOCUS_MATRIX, self.depth)]
        x_center_num = sum(
            i for i, num in enumerate(FOCUS_MATRIX - np.array(self.depth)) if num >= 0
        )
        x_center_cnt = np.sum(np.array(FOCUS_MATRIX) - np.array(self.depth) >= 0)
        x_center = (x_center_num / x_center_cnt) if x_center_cnt > 0 else 0
        left_weight_matrix = list(range(32))
        right_weight_matrix = list(range(31, -1, -1))
        right_weight = np.dot(filter_matrix, right_weight_matrix)
        left_weight = np.dot(filter_matrix, left_weight_matrix)
        self.deep_y = min(np.array(self.depth))
        self.deep_center_y = min(np.array(self.depth)[10:23])
        self.max_deep_center_y = max(np.array(self.depth)[9:24])
        self.red_deep_center_y = min(np.array(self.depth)[10:23])
        self.deep_sum = sum(np.array(self.depth))
        self.deep_sum_l = sum(np.array(self.depth)[0:16])
        self.deep_sum_r = sum(np.array(self.depth)[17:32])
        self.left_deep = np.array(self.depth)[4]
        self.left_center_deep = np.array(self.depth)[8]
        self.right_deep = np.array(self.depth)[28]
        self.right_center_deep = np.array(self.depth)[24]
        self.center_deep = np.array(self.depth)[16]
        x_boundary = 31 if left_weight > right_weight else 0
        print("x_center",x_center)
        print("x_boundary",x_boundary)
        self.deep_x = x_center - x_boundary
        if self.deep_x > 16:
            self.deep_x = 16
        elif self.deep_x < -16:
            self.deep_x = -16

    def move(self, action_id):
        self.calculate()
        if MAX_FORWARD_X - self.now_speed >= 500:
            self.now_speed += 100
        else:
            self.now_speed = MAX_FORWARD_X
        actions = {
            "stay": {"x": -200, "y": 0, "theta": 0},
            "max_speed": {
                "x": self.now_speed,
                "y": 0,
                "theta": MAX_FORWARD_THETA,
            },
            # "small_back": {"x": -1500, "y": 0, "theta": 0},
            "small_forward": {"x": 6000, "y": 0, "theta": 0},
            "imu_fix": {
                "x": IMU_RIGHT_X if self.yaw > 0 else IMU_LEFT_X,
                "y": 0,
                "theta": self.imu_angle(),
            },
            "turn_right": {
                "x": TURN_RIGHT_X,
                "y": 0,
                "theta": TURN_RIGHT_THETA,
            },
            "turn_right_back": {
                "x": TURN_LEFT_X,
                "y": 0,
                "theta": TURN_LEFT_THETA,
            },
            "turn_left": {"x": TURN_LEFT_X, "y": 0, "theta": TURN_LEFT_THETA},
            "turn_left_back": {
                "x": TURN_RIGHT_X,
                "y": 0,
                "theta": TURN_RIGHT_THETA,
            },
            "preturn_left": {
                "x": TURN_LEFT_X,
                "y": 0,
                "theta": TURN_LEFT_THETA,
            },
            "preturn_right": {
                "x": TURN_RIGHT_X,
                "y": 0,
                "theta": TURN_RIGHT_THETA,
            },
        }
        action = actions.get(action_id, None)
        if action is not None:
            x = action["x"]
            y = action["y"]
            theta = action["theta"]
            if self.speed_x < x:
                self.speed_x = self.speed_x + 100
            elif self.speed_x > x:
                self.speed_x = self.speed_x - 100
            self.sendContinuousValue(self.speed_x, y, theta)
            self.hand_up(self.speed_x)
            # self.now_speed = x
            self.get_logger().info(f"walk status = {action_id}")
            self.get_logger().info(f"current speed = {self.now_speed}")
            self.get_logger().info(f"walking = {self.speed_x, y, theta}")
 
    # def hand_up(self,x):
    #     if x >= 0 and self.sp_hand_up == True:
    #         self.sendBodySector(202)
    #         self.sp_hand_up = False
    #     elif x < 0 and self.sp_hand_up == False:
    #         self.sendBodySector(201)
    #         self.sendBodySector(203)
    #         self.sp_hand_up = True
    def hand_up(self,x):
        if x > 0 and self.sp_hand_down == True and self.sp_stand == False:
            self.sendBodySector(204)
            self.sp_hand_up = False
            self.sp_hand_down = False
            self.sp_stand = True
        elif x < 0 and self.sp_hand_up == True and self.sp_stand == False:
            self.sendBodySector(201)
            self.sp_hand_up = False
            self.sp_hand_down = False
            self.sp_stand = True
        elif x > 0 and self.sp_hand_up == False and self.sp_stand == True:
            self.sendBodySector(202) # 手舉起
            self.sp_hand_up = True
            self.sp_stand = False
        elif x < 0 and self.sp_hand_down == False and self.sp_stand == True:
            self.sendBodySector(203) # 手舉起
            self.sp_hand_down = True
            self.sp_stand = False

    def turn_angle(self):
        self.calculate()
        turn_ranges = [
            (17, -6),
            (12, -6),
            (8, -5),
            (6, -5),
            (4, -4),
            (2, -2),
            (0, 0),
            (-2, 2),
            (-4, 3),
            (-6, 4),
            (-8, 5),
            (-12, 5),
            (-17, 5),
        ]
        for turn_range in turn_ranges:
            if self.deep_x >= turn_range[0]:
                return turn_range[1]
        return 0
    def imu_angle(self):
        imu_ranges = [
            (180, -5),
            (90, -5),
            (60, -5),
            (45, -5),
            (20, -4),
            (10, -3),
            (5, -3),
            (2, -2),
            (0, 0),
            (-2, 2),
            (-5, 3),
            (-10, 3),
            (-20, 4),
            (-45, 5),
            (-60, 5),
            (-90, 5),
            (-180, 5),
        ]
        for imu_range in imu_ranges:
            if self.yaw >= imu_range[0]:
                return imu_range[1]
        return 0




    def run(self):
        if self.is_start:
            print("\033[2J\033[H", end='')  # Clear console]")
            self.calculate()
            self.get_logger().info(f"pre_status : {self.pre_status}")
            self.get_logger().info(f"status : {self.status}")
            self.get_logger().info(f"dx : {self.deep_x}")
            self.get_logger().info(f"dy : {self.deep_y}")

            if self.status == 'preturn_L':
                if not self.body_auto:
                    self.walk_switch()
                if self.yaw <20:
                    self.move("turn_left")
                else:
                    self.status = 'starting_walking_with_obs'
            elif self.status == 'preturn_R':
                if not self.body_auto:
                    self.walk_switch()
                if self.yaw > -30:
                    self.move("turn_right")
                else:
                    self.status = 'starting_walking_with_obs'
            elif self.status == 'start':
                if not self.body_auto:
                    self.walk_switch()
                if self.deep_y < 24:
                    self.pre_status = self.status
                    self.status = 'starting_walking_with_obs'
                else:
                    self.pre_status = self.status
                    self.status = 'starting_walking_without_obs'
            elif self.status == 'starting_walking_with_obs' :
                # if -16 <= self.deep_x <= -4 or 4 <= self.deep_x <= 16 and not self.imu_ok:
                #     if self.yaw > 3:
                #         self.pre_status = self.status
                #         self.status = 'imu_fix_right'
                #     elif self.yaw < -3:
                #         self.pre_status = self.status
                #         self.status = 'imu_fix_left'
                #     else:
                #         self.imu_ok = True
                #         self.status = self.pre_status
                # else:
                if  -6 <= self.deep_x <= 6:
                    self.pre_status = self.status
                    self.status = 'walk_forword'
                elif -15 < self.deep_x < -6:
                    # self.pre_status = self.status
                    # self.status = 'turn_left'
                    self.move("turn_left")

                elif 6 < self.deep_x < 15:
                    # self.pre_status = self.status
                    # self.status = 'turn_right'
                    self.move("turn_right")
                # elif -16 <= self.deep_x <= -14 or 14 <= self.deep_x <= 16:
                #     self.move("stay")
                #     self.sendHeadMotor(1, 1548, 50)
                #     self.calculate()
                #     self.left_deep_sum = self.deep_sum
                #     self.time_sleep(2)
                #     self.sendHeadMotor(1, 2548, 50)
                #     self.calculate()
                #     self.right_deep_sum = self.deep_sum
                #     self.time_sleep(2)
                #     self.sendHeadMotor(1, 2048, 50)
                #     if self.left_deep_sum > self.right_deep_sum:
                #         self.status = 'turn_right_90'
                #     else:
                #         self.status = 'turn_left_90'
            elif self.status =='turn_right_90':
                if self.yaw > -50:
                    self.move("turn_right")
                else:
                    self.status = "walk_forword"
            elif self.status =='turn_left_90':
                if self.yaw < 50:
                    self.move("turn_left")
                else:
                    self.status = "walk_forword"
            elif self.status == 'imu_fix_right':
                if self.yaw > 3 :
                    self.move("turn_right")
                    self.status = 'starting_walking_with_obs'
                else:
                    self.imu_ok = True
                #move
            elif self.status == 'imu_fix_left':
                if self.yaw < -3:
                    self.move("turn_left")
                    self.status = 'starting_walking_with_obs'
                else:
                    self.imu_ok = True

            elif self.status == 'walk_forword':
                if self.deep_y < 24:
                    self.move("small_forward")
                    if abs(self.deep_x) > 4:
                        self.pre_status = self.status
                        self.status = 'starting_walking_with_obs'
                else:
                    self.pre_status = self.status
                    self.status = 'starting_walking_without_obs'

            elif self.status == 'starting_walking_without_obs':
                if self.deep_y < 24 :
                    self.status = 'starting_walking_with_obs'
                else :
                    self.move("max_speed")


        else:

            if self.body_auto:
                self.walk_switch()
            # if not self.status == 'start':
            #     self.initial()
            #     self.status = 'start'
def main(args=None):
    rclpy.init(args=args)
    node = Strategy()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

            


