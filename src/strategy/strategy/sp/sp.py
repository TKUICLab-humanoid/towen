#!/usr/bin/env python
#coding=utf-8

import sys 
import os
from strategy.API import API
import rclpy
from std_msgs.msg import String
from collections import Counter, deque
import numpy as np
import time as time
import math

PRINT = True
FORWARD_START_SPEED = 6000
FORWARD_MAX_SPEED = 6000
FORWARD_MIN_SPEED = 2000
BACK_START_SPEED = -1000
BACK_MAX_SPEED = -6000

FORWARD_SPEED_ADD = 100
FORWARD_SPEED_SUB = -100
BACK_SPEED_ADD = -100

FORWARD_ORIGIN_THETA = 0
BACK_ORIGIN_THETA = 0

FORWARD_THETA = 2
BACK_THETA = 2

LEFT = 1
RIGHT = -1

TARGET_R = 5
TARGET_L = 2
class Strategy(API):
    def __init__(self):
        super().__init__('sp')
        self.get_logger().info('Strategy node started')
        self.init()
        self.speed = 0
        self.now_speed = 0
        self.pre_speed = 0
        # self.backward = 0
        self.theta = 0
        self.now_theta = 0
        self.pre_theta = 0
        self.sp_targetl = Coordinate(0, 0)
        self.sp_targetr = Coordinate(0, 0)
        self.sp_sizel = 0
        self.sp_sizer = 0
        self.sp_ball = 0
        self.sp_hand_up = False
        self.sp_stand = True
        self.sp_hand_down = False

    def init(self):
        self.status = 'First'
        # self.forward.speed = FORWARD_START_SPEED
        # self.backward.speed = BACK_START_SPEED
        self.sendHeadMotor(1, 2048, 50)
        self.sendHeadMotor(2, 1250, 50)
        self.sendSensorReset(True)
        self.speed = 0
        self.sp_hand_up = False
        self.sp_stand = True
        self.sp_hand_down = False

    def target_find(self, color):
        img_size = 0
        if self.color_counts[color] > 0:
            for i in range (self.color_counts[color]):
                if self.object_sizes[color][i] > img_size:
                    middle_x = (self.object_x_min[color][i] + self.object_x_max[color][i]) // 2
                    middle_y = (self.object_y_min[color][i] + self.object_y_max[color][i]) // 2
                    size = self.object_sizes[color][i]
            return middle_x, middle_y, size
        return 0, 0, 0

    def imu_go(self, speed, speed_variation, speed_limit, theta_value, origin_theta):
        if self.status == 'Forward':
            self.speed = min(speed_limit, speed + speed_variation)
        elif self.status == 'Decelerating' or self.status == 'Backward':                                 #減速與後退取最大值
            self.speed = max(speed_limit, speed + speed_variation)

        if self.imu_rpy[2] >= 6:
            self.theta = RIGHT * theta_value + origin_theta
        elif self.imu_rpy[2] <= -6:
            self.theta = LEFT * theta_value + origin_theta
        else:
            self.theta = origin_theta

    def status_change(self):
        if 14000 >= self.sp_ball >= 11000:     #到球前減速
            return 'Decelerating'
        elif self.sp_ball > 14000:   #準備後退
            return 'Backward'

        return 'Forward'
    
    def hand_up(self):
        if self.speed == 0 and (self.sp_hand_up == True or self.sp_hand_down == True) and self.sp_stand == False:
            if self.sp_hand_up == True:
                self.sendBodySector(201) # 手放下
            else:
                self.sendBodySector(301)
            self.sp_hand_up = False
            self.sp_hand_down = False
            self.sp_stand = True
        elif self.speed < 0 and self.sp_hand_up == False and self.sp_stand == True:
            self.sendBodySector(202) # 手舉起
            self.sp_hand_up = True
            self.sp_stand = False
        elif self.speed > 0 and self.sp_hand_down == False and self.sp_stand == True:
            self.sendBodySector(302) # 手舉起
            self.sp_hand_down = True
            self.sp_stand = False

    def run(self):
        try:
            while rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.1)
                if self.is_start:
                    # self.sp_targetl.x, self.sp_targetl.y, self.sp_sizel = self.target_find(TARGET_L)
                    # self.sp_targetr.x, self.sp_targetr.y, self.sp_sizer = self.target_find(TARGET_R)
                    # self.sp_ball = self.sp_sizel + self.sp_sizer 
                    # if self.status == 'First':
                    #     self.init()
                    #     time.sleep(1)
                    #     self.sendbodyAuto(1)
                    #     self.status = 'Forward'
                    # elif self.status == 'Forward':
                    #     self.imu_go(self.speed, FORWARD_SPEED_ADD, FORWARD_MAX_SPEED, FORWARD_THETA, FORWARD_ORIGIN_THETA)
                    #     self.status = self.status_change()
                    # elif self.status == 'Decelerating':
                    #     self.imu_go(self.speed, FORWARD_SPEED_SUB, FORWARD_MIN_SPEED, FORWARD_THETA, FORWARD_ORIGIN_THETA)
                    #     self.status = self.status_change()
                    # elif self.status == 'Backward':
                    #     self.imu_go(self.speed, BACK_SPEED_ADD, BACK_MAX_SPEED, BACK_THETA, BACK_ORIGIN_THETA)
                    
                    # if self.pre_speed != self.speed or self.pre_theta != self.theta:
                    #     self.sendContinuousValue(self.speed, 0, self.theta)
                    #     self.pre_speed = self.speed
                    #     self.pre_theta = self.theta
                    #     self.hand_up()
                    # self.data_print()
                    if self.first == True:
                        self.sendBodySector(101)
                        time.sleep(1)
                        self.first = False
                else:
                    # if self.status != 'First':
                    #     self.sendbodyAuto(0)
                    #     self.sendBodySector(29)
                    #     time.sleep(1)
                    #     self.init()
                    # self.status = 'First'
                    # self.sp_targetl.x, self.sp_targetl.y, self.sp_sizel = self.target_find(TARGET_L)
                    # self.sp_targetr.x, self.sp_targetr.y, self.sp_sizer = self.target_find(TARGET_R)
                    # self.sp_ball = self.sp_sizel + self.sp_sizer 
                    # self.data_print()
                    if self.dio == 0x04:
                        self.sendBodySector(29)
                        time.sleep(1)
                    
        except EnvironmentError:
            rclpy.shutdown()

    def data_print(self):
        print("\033[2J\033[H", end='')  # Clear console]")
        self.get_logger().info(f"--------------------------------------------")
        self.get_logger().info(f"status={self.status}")
        # self.get_logger().info(f"sp_targetl_x={self.sp_targetl.x}")
        # self.get_logger().info(f"sp_targetl_y={self.sp_targetl.y}")
        # self.get_logger().info(f"sp_targetr_x={self.sp_targetr.x}")
        # self.get_logger().info(f"sp_targetr_y={self.sp_targetr.y}")
        # self.get_logger().info(f"sp_sizel={self.sp_sizel}")
        # self.get_logger().info(f"sp_sizer={self.sp_sizer}")
        self.get_logger().info(f"speed={self.speed}") 
        self.get_logger().info(f"theta={self.theta}") 
        self.get_logger().info(f"sp_ball={self.sp_ball}")
        self.get_logger().info(f"--------------------------------------------")

class Coordinate:
    def __init__(self, x, y):
        self.x, self.y = x, y
    def __add__(self, other):
        return Coordinate((self.x + other.x), (self.y + other.y))
    def __sub__(self, other):
        return Coordinate((self.x - other.x), (self.y - other.y))
    def __floordiv__(self, other):
        return Coordinate((self.x // other), (self.y // other))
    
def main(args=None):
    rclpy.init(args=args)
    node = Strategy()
    node.run()
    node.destroy_node()

if __name__ == '__main__':
    main()

'''
##### color info #####
# 0:orange, 1:Yellow, 2:Blue, 3:Green, 4:Black, 5:Red, 6:White, 7:Other
self.color_counts[0]    # select color:0-7
self.object_sizes[0][0] # select color size
self.object_x_min[0][0] # select color Xmin
self.object_x_max[0][0] # select color Xmax
self.object_y_min[0][0] # select color Ymin
self.object_y_max[0][0] # select color Ymax
self.get_logger().info(f"Orange_cnt = {self.color_counts[0]}")

##### IMU info ######
self.get_logger().info(f"ROLL = {self.roll}")   # IMU roll
self.get_logger().info(f"PITCH = {self.pitch}") # IMU pitch
self.get_logger().info(f"YAW = {self.yaw}")     # IMU yaw
self.reset(True)                                # reset IMU

##### motion info #####
self.sendbodyAuto(1)                    # Generate Walking
self.sendbodyAuto(0)                    # Generate stoping
self.sendBodySector(29)                 # Execute Sector
self.sendContinuousValue(1000,200,5)    # Change Walking (x, y, theta)

##### DIO info #####
self.get_logger().info(f"strategy_status = {self.is_start}")    # Switch for Strategy 
self.get_logger().info(f"DIO_Value = {self.dio}")               # Switch for DIO (0x00-0x1C)
'''
