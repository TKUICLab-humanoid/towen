#!/usr/bin/env python
#coding=utf-8

import sys
from strategy.API import API
import rclpy
from rclpy.duration import Duration
from std_msgs.msg import String
import time
import math

#======================================================================================
TARGET_SIZE = 500
HEAD_HORIZONTAL = 2048
HEAD_VERTIVAL = 1600
CORRECT       = [-3000, 0, 0]        #原地踏步修正
LEFT_CORRECT  = [-3000, 0, 4]        #左旋修正
RIGHT_CORRECT = [-3000, 0, -4]       #右旋修正
#                 x , y , theta 

#======================================================================================

# BASKET_SIZE_60_90 = [8439, 3050]       #sector 5301                                                     #投籃時測量的籃框距離方法 #五分投籃時站姿高度看籃框size測距離
FIVEPOINT_HEAD_Y_DEGREE = [1956]      #投出去偏向左邊＝>頭往左轉（大）-朝1960 ;  投出去偏向右邊＝>頭往右轉（小）-朝1940    #投籃前頭會固定一個角度，並扭腰
# THROW_BALL_PLUS = 200                 #line  0   left side 0 right side  4
#15.9 - 150
#三用電表15.7以上ˇ
#======================================================================================

CATCH_BALL_LINE = [1410, 1430, 1500]         #degree   # slow_degree,stop_degree,backward_degree
TWO_POINT_LINE  = [1750, 1600, 1500]         #degree   # slow_degree,stop_degree,backward_degree
THREE_POINT_LINE = [1995, 1970, 1870]        #degree   # forward_stop_size < forward_slow_size < backward_slow_size < backward_stop_size #上下上下-30
FIVE_POINT_LINE  = [2700, 2800, 3150, 3200]  #size     # forward_stop_size < forward_slow_size < backward_slow_size < backward_stop_size
#注意 size數值調越大會離籃框越近！！！

class Strategy(API):
    def __init__(self):
        super().__init__('bb')
        self.get_logger().info('Strategy node started')
        self.cnt = 0
        self.initial()
        self.target_pos = Coordinate(0, 0)
        self.now_head_h = 2048
        self.now_head_v = 1300
        self.new_head_h = 2048
        self.new_head_v = 1300

    def initial(self):
        self.status = 'Begin'
        self.point = 5
        self.speed_x = 0
        self.speed_y = 0
        self.theta = 0
        self.pre_speed_x = 0
        self.pre_speed_y = 0
        self.pre_theta = 0
        self.now_speed_x = 0
        self.now_speed_y = 0
        self.now_theta = 0
        self.now_yaw = 0
        self.direction = 0
        self.speed_step = 100
        self.theta_step = 1
        self.decrease_limit = 0
        # self.now_head_h = 2048
        # self.now_head_v = 1600
        self.stop_limit = 0
        self.back_limit = 0
        self.select = 0
        self.keep_away_limit = 0
        self.direction_yaw = 0
        self.target_size = 0
        self.now_waist = 2048
        self.next = False
        self.body_auto = False
        self.limit_show = True
        self.first_in = True
        self.check_target = False
        # self.new_head_h = 2048
        # self.new_head_v = 1600
        # self.sendHeadMotor(2, HEAD_VERTIVAL, 20)
        # self.sendHeadMotor(1, HEAD_HORIZONTAL, 20)
        self.sendSensorReset(True)  

    def limit_replace(self):
        if self.dio == 0x02 or self.dio == 0x06:
            self.point = 2
            self.decrease_limit = TWO_POINT_LINE[0]
            self.stop_limit = TWO_POINT_LINE[1]
            self.back_limit = TWO_POINT_LINE[2]
        elif self.dio == 0x0A or self.dio == 0x0E:
            self.point = 3
            self.decrease_limit = THREE_POINT_LINE[0]
            self.stop_limit = THREE_POINT_LINE[1]
            self.back_limit = THREE_POINT_LINE[2]
        elif self.dio == 0x12 or self.dio == 0x16:
            self.point = 5
            self.decrease_limit = FIVE_POINT_LINE[0]
            self.stop_limit = FIVE_POINT_LINE[1]
            self.back_limit = FIVE_POINT_LINE[2]
            self.keep_away_limit = FIVE_POINT_LINE[3]
        # if self.dio == 0x06 or self.dio == 0x0E or self.dio == 0x16:
        #     self.sendHeadMotor(2, 1400, 50)
        #     self.time_sleep(0.5)
        #     self.status = 'catch_ball'
            

    def find_target(self, color, move=True):           
        # if self.color_counts[color] > 0 and any(
        #     size > self.target_size for size in self.object_sizes[color][:self.color_counts[color]]
        # ):
        #     max_idx = max(
        #         range(self.color_counts[color]),
        #         key=lambda i: self.object_sizes[color][i]
        #     )

        #     self.target_size = self.object_sizes[color][max_idx]
        #     self.target_pos.x = (self.object_x_min[color][max_idx] + self.object_x_max[color][max_idx]) // 2
        #     self.target_pos.y = (self.object_y_min[color][max_idx] + self.object_y_max[color][max_idx]) // 2
        #     self.next = True
        self.get_logger().info(f"self.new_object_info={self.new_object_info}")
        if self.new_object_info :
            if self.color_counts[color] > 0:
                target_size = 0
                for i in range (self.color_counts[color]):
                    if self.object_sizes[color][i] > target_size:
                        target_size = self.object_sizes[color][i] 
                        self.target_pos.x = (self.object_x_min[color][i] + self.object_x_max[color][i]) // 2
                        self.target_pos.y = (self.object_y_min[color][i] + self.object_y_max[color][i]) // 2
                        self.get_logger().info(f"object_sizes={self.object_sizes[color][i] }")
                        self.select = i
                self.next = True
            else:
                if color == 1 and move:
                    self.get_logger().info(f"WWWW")
                    if self.cnt == 0:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL - 200, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL + 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL - 200
                        self.new_head_v = HEAD_VERTIVAL + 300
                        self.cnt += 1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 1:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL - 400, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL + 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL - 400
                        self.new_head_v = HEAD_VERTIVAL + 300
                        self.cnt += 1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 2:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL - 600 , 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL + 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL - 600
                        self.new_head_v = HEAD_VERTIVAL + 300
                        self.cnt += 1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 3:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL - 600, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL - 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL - 600
                        self.new_head_v = HEAD_VERTIVAL - 300
                        self.cnt += 1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 4:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL - 400, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL - 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL - 400
                        self.new_head_v = HEAD_VERTIVAL - 300
                        self.cnt += 1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 5:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL - 200, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL - 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL - 200
                        self.new_head_v = HEAD_VERTIVAL - 300
                        self.cnt += 1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 6:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL + 200, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL - 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL + 200
                        self.new_head_v = HEAD_VERTIVAL - 300
                        self.cnt +=1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 7:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL + 400, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL - 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL + 400
                        self.new_head_v = HEAD_VERTIVAL - 300
                        self.cnt +=1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 8:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL + 600, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL - 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL + 600
                        self.new_head_v = HEAD_VERTIVAL - 300
                        self.cnt +=1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 9:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL + 600, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL + 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL + 600
                        self.new_head_v = HEAD_VERTIVAL + 300
                        self.cnt +=1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 10:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL + 400, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL + 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL + 400
                        self.new_head_v = HEAD_VERTIVAL + 300
                        self.cnt +=1
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    elif self.cnt == 11:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL + 200, 30)
                        self.sendHeadMotor(2, HEAD_VERTIVAL + 300, 30)
                        self.new_head_h = HEAD_HORIZONTAL + 200
                        self.new_head_v = HEAD_VERTIVAL + 300
                        self.cnt = 0
                        # self.time_sleep(0.05)
                        # self.time_sleep(1.0)
                    self.time_sleep(1.0)
                elif color == 5 and move:
                    if self.cnt == 0:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL - 100, 20)
                        self.sendHeadMotor(2, HEAD_HORIZONTAL, 20)
                        self.new_head_h = HEAD_HORIZONTAL - 100
                        self.new_head_v = HEAD_HORIZONTAL
                        self.cnt += 1
                        self.time_sleep(0.5)
                    elif self.cnt == 1:
                        self.sendHeadMotor(1, HEAD_HORIZONTAL + 100, 50)
                        self.sendHeadMotor(2, HEAD_HORIZONTAL, 50)
                        self.new_head_h = HEAD_HORIZONTAL + 100
                        self.new_head_v = HEAD_HORIZONTAL
                        self.cnt += 1
                        self.time_sleep(0.5)
                self.next = False
            self.new_object_info = False
            
            
        #----------------------------yolo----------------------------         


        #----------------------------yolo----------------------------        

    def speed_change(self):
        if self.now_speed_x > self.speed_x:
            self.now_speed_x -= self.speed_step
        elif self.now_speed_x < self.speed_x:
            self.now_speed_x += self.speed_step
        else:
            self.now_speed_x = self.speed_x
        
        if self.now_theta > self.theta:
            self.now_theta -= self.theta_step
        elif self.now_theta < self.theta:
            self.now_theta += self.theta_step
        else:
            self.now_theta = self.theta
            
    def compute_motor_targets(
        self, x_target, y_target,
        curr_h_angle, curr_v_angle,
        hfov_deg=50 , vfov_deg=30.0,
        # hfov_deg=90.0, vfov_deg=60.0,
        image_width=320, image_height=240
    ):
        # logi C930
        # hfov_deg=64.5, vfov_deg=40.0,
        # hfov_deg=90.0, vfov_deg=60.0
        # zedx mini
        # hfov_deg=110.0, vfov_deg=70.0
        cx = image_width // 2
        cy = image_height // 2
        deg_per_pixel_x = hfov_deg / image_width
        deg_per_pixel_y = vfov_deg / image_height
        dx_pixel = x_target - cx
        dy_pixel = y_target - cy
        # self.get_logger().info(f"dx_pixel={dx_pixel}")
        # self.get_logger().info(f"dy_pixel={dy_pixel}")
        
        dx_angle = dx_pixel * deg_per_pixel_x
        dy_angle = dy_pixel * deg_per_pixel_y
        dx_angle = dx_angle * 4096 / 360 * 0.1
        dy_angle = dy_angle * 4096 / 360 * 0.1
        # self.get_logger().info(f"new_h_angle={dx_angle}")
        # self.get_logger().info(f"new_v_angle={dy_angle}")
        
        new_h_angle = int(curr_h_angle - dx_angle)
        new_v_angle = int(curr_v_angle - dy_angle)
        # self.get_logger().info(f"new_h_angle={new_h_angle}")
        # self.get_logger().info(f"new_v_angle={new_v_angle}")
        
        # pos_h = self.angle_to_position(new_h_angle)
        # pos_v = self.angle_to_position(new_v_angle)
        
        delta_h_ticks = int(-dx_angle / 360 * 4096)
        delta_v_ticks = int(-dy_angle / 360 * 4096)
        # return pos_h, pos_v, delta_h_ticks, delta_v_ticks
        return new_h_angle, new_v_angle, delta_h_ticks, delta_v_ticks



    def angle_to_position(self, angle_deg):
        return int((angle_deg % 360) / 360 * 4095)
    
    def eye2hand(self):
        pass

    def run(self):
        try:
            while rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.3)
                if self.is_start :
                    if self.status =='Begin':
                        self.sendBodySector(29)
                        self.time_sleep(2.5)
                        # self.sendBodySector(31)
                        # self.time_sleep(0.5)
                        # self.initial()
                        self.sendHeadMotor(2, self.now_head_v, 30)
                        self.sendHeadMotor(1, self.now_head_h, 30)
                        self.time_sleep(0.5)
                        self.initial()
                        self.limit_replace()
                        self.status = 'find_ball'
                    elif self.status =='find_ball':
                        self.limit_show = False
                        self.find_target(1, True)
                        if self.next:
                            if abs(self.target_pos.x - 160) <= 10 and abs(self.target_pos.y - 120) <= 10:
                            # self.get_logger().info(f"targetx={self.target_pos.x}")
                                # self.get_logger().info(f"targety={self.target_pos.y }")
                                self.get_logger().info(f"jjjjjjjjjjjjjjjjjjjjjj")
                                # self.sendHeadMotor(1, HEAD_HORIZONTAL, 50)
                                # self.sendHeadMotor(2, HEAD_VERTIVAL, 50)
                                self.new_head_h = self.now_head_h
                                self.new_head_v = self.now_head_v
                                self.time_sleep(1)
                                # self.sendSingleMotor(15, self.now_head_h, 50)
                                # self.time_sleep(1)
                                # self.direction = self.imu_rpy[2]
                                self.next = False
                                self.status = 'direction_fix'
                            else:
                                self.now_head_h, self.now_head_v, delta_head_h, delta_head_v = self.compute_motor_targets(self.target_pos.x, self.target_pos.y, self.new_head_h, self.new_head_v)
                                self.control_head(1, self.now_head_h, 100)
                                self.control_head(2, self.now_head_v, 100)
                                self.new_head_h = self.now_head_h
                                self.new_head_v = self.now_head_v
                                # self.get_logger().info(f"targetx={self.target_pos.x}")
                                # self.get_logger().info(f"targety={self.target_pos.y }")
                                # self.time_sleep(0.1)
                    elif self.status =='direction_fix':
                        self.get_logger().info(f"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa")
                        self.find_target(1, False)
                        self.now_head_h, self.now_head_v, delta_head_h, delta_head_v = self.compute_motor_targets(self.target_pos.x, self.target_pos.y, self.new_head_h, self.new_head_v)
                        self.control_head(1, self.now_head_h, 100)
                        self.control_head(2, self.now_head_v, 100)
                        self.new_head_h = self.now_head_h
                        self.new_head_v = self.now_head_v
                        # self.time_sleep(0.01)
                        if self.next:
                            if (CATCH_BALL_LINE[0] < self.now_head_v < CATCH_BALL_LINE[1]) and (abs(self.now_head_h - 2048) < 100):
                                if self.body_auto:
                                    self.sendbodyAuto(0)
                                    self.body_auto = False
                                    self.time_sleep(2)
                                    self.now_speed_x = 0
                                    self.now_theta = 0
                                self.sendBodySector(29)
                                self.time_sleep(2)
                                self.first_in = True
                                self.next = False
                                self.status = 'waist_fix'
                            else:
                                if self.now_head_v >= CATCH_BALL_LINE[1] or self.now_head_v <= CATCH_BALL_LINE[0]:
                                    self.speed_x = 1000 if self.now_head_v >= CATCH_BALL_LINE[1] else -3000
                                else:
                                    self.speed_x = 0
                                if (self.now_head_h - 2048) > 100 or (self.now_head_h - 2048) < -100:
                                    self.theta = 4 if (self.now_head_h - 2048) > 100 else -4
                                else:
                                    self.theta = 0 
                                if (self.object_sizes[1][self.select] > 2500 or self.now_head_v  < CATCH_BALL_LINE[0] )and self.first_in:
                                    self.sendBodySector(31)
                                    self.time_sleep(2)
                                    self.first_in = False
                                if not self.body_auto:
                                    self.sendbodyAuto(1)
                                    self.body_auto = True
                                    self.time_sleep(3)
                    elif self.status =='waist_fix':
                        
                        self.sendBodySector(29)
                        self.time_sleep(5)
                        self.find_target(1, False)
                        self.sendHeadMotor(1, 2048, 10)
                        self.sendSingleMotor(15, (self.new_head_h - 2048)+100, 10)
                        self.time_sleep(3)
                        
                        # self.now_head_h, self.now_head_v, delta_head_h, delta_head_v = self.compute_motor_targets(self.target_pos.x, self.target_pos.y, self.new_head_h, self.new_head_v)
                        # self.time_sleep(0.01)
                            # else:
                            #     self.time_sleep(0.5)
                        if self.object_sizes[1][self.select]  <= 1700:
                            self.sendBodySector(100)
                            self.time_sleep(15)
                        elif 1700 < self.object_sizes[1][self.select] <= 1900:
                            self.sendBodySector(110)
                            self.time_sleep(3)
                            for i in range (2):
                                self.sendBodySector(32)
                                self.time_sleep(3)
                            self.sendBodySector(120)
                            self.time_sleep(10)
                        elif 1900 < self.object_sizes[1][self.select] <= 2100:
                            self.sendBodySector(110)
                            self.time_sleep(3)
                            for i in range (3):
                                self.sendBodySector(32)
                                self.time_sleep(3)
                            self.sendBodySector(120)
                            self.time_sleep(10)
                        elif 2100 < self.object_sizes[1][self.select] <= 2300:
                            self.sendBodySector(110)
                            self.time_sleep(3)
                            for i in range (4):
                                self.sendBodySector(32)
                                self.time_sleep(3)
                            self.sendBodySector(120)
                            self.time_sleep(10)
                        elif 2300 < self.object_sizes[1][self.select] <= 2500:
                            self.sendBodySector(110)
                            self.time_sleep(3)
                            for i in range (5):
                                self.sendBodySector(32)
                                self.time_sleep(3)
                            self.sendBodySector(120)
                            self.time_sleep(10)
                        elif 2500 < self.object_sizes[1][self.select] <= 2700:
                            self.sendBodySector(110)
                            self.time_sleep(3)
                            for i in range (6):
                                self.sendBodySector(32)
                                self.time_sleep(3)
                            self.sendBodySector(120)
                            self.time_sleep(10)
                        elif 2700 < self.object_sizes[1][self.select] <= 2900:
                            self.sendBodySector(110)
                            self.time_sleep(3)
                            for i in range (7):
                                self.sendBodySector(32)
                                self.time_sleep(3)
                            self.sendBodySector(120)
                            self.time_sleep(10)
                        self.sendBodySector(29)
                        self.time_sleep(2.5)
                        # self.sendBodySector(31)
                        # self.time_sleep(2.5)
                        self.cnt = 0
                        self.direction_yaw = self.imu_rpy[2]

                        self.status ='basket_fix'
                        # else:
                        #     self.get_logger().info(f"cccccccc")
                        #     self.find_target(0, False)
                        #     self.now_head_h, self.now_head_v, delta_head_h, delta_head_v = self.compute_motor_targets(self.target_pos.x, self.target_pos.y, self.new_head_h, self.new_head_v)
                        #     # self.sendHeadMotor(1, self.now_head_h, 5)
                        #     # self.sendHeadMotor(2, self.now_head_v, 5)
                        #     self.new_head_h = self.now_head_h
                        #     self.new_head_v = self.now_head_v
                        #     # self.now_waist -= (self.new_head_h - 2048)
                        #     self.get_logger().info(f"self.now_waist={self.now_waist}")
                            # self.sendHeadMotor(1, 2048, 10)
                            # self.sendSingleMotor(15, -(self.new_head_h - 2048), 10)
                            # self.time_sleep(3)
                            # self.time_sleep(0.1)

                            
                    elif self.status =='basket_fix':
                        if ((self.direction_yaw < 0) and (self.imu_rpy[2] >= abs(self.direction_yaw ))) or ((self.direction_yaw > 0) and (self.imu_rpy[2] <= -self.direction_yaw)) :
                            self.get_logger().info(f";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;")
                            if self.body_auto:
                                self.sendbodyAuto(0)
                                self.body_auto = False
                                self.time_sleep(3)
                                self.now_speed_x = 0
                            self.find_target(5, True)
                            if self.next:
                                if abs(self.target_pos.x - 160) <= 5 and abs(self.target_pos.y - 120) <= 5:
                                # self.get_logger().info(f"targetx={self.target_pos.x}")
                                    # self.get_logger().info(f"targety={self.target_pos.y }")
                                    self.get_logger().info(f"jjjjjjjjjjjjjjjjjjjjjj")
                                    # self.sendHeadMotor(1, HEAD_HORIZONTAL, 50)
                                    # self.sendHeadMotor(2, HEAD_VERTIVAL, 50)
                                    # self.new_head_h = HEAD_HORIZONTAL
                                    # self.new_head_v = HEAD_VERTIVAL
                                    # self.time_sleep(1)
                                    # self.sendSingleMotor(15, self.now_head_h, 50)
                                    # self.time_sleep(1)
                                    # self.direction = self.imu_rpy[2]
                                    self.next = False
                                    self.status = 'throw_fix'
                                else:
                                    self.now_head_h, self.now_head_v, delta_head_h, delta_head_v = self.compute_motor_targets(self.target_pos.x, self.target_pos.y, self.new_head_h, self.new_head_v)
                                    self.control_head(1, self.now_head_h, 10)
                                    self.control_head(2, self.now_head_v, 10)
                                    self.new_head_h = self.now_head_h
                                    self.new_head_v = self.now_head_v
                                    # self.now_waist -= (self.new_head_h - 2048)
                                    # self.sendSingleMotor(15, (self.new_head_h - 2048), 10)
                                    # self.get_logger().info(f"targetx={self.target_pos.x}")
                                    # self.get_logger().info(f"targety={self.target_pos.y }")
                                    self.time_sleep(0.1)
                        else:
                            self.get_logger().info(f"imu>2")
                            self.theta = 4 if self.direction_yaw < 0 else -4
                            self.speed_x = -5000
                            self.sendBodySector(31)
                            self.time_sleep(2)
                            if not self.body_auto:
                                self.sendbodyAuto(1)
                                self.body_auto = True
                                self.time_sleep(3)
                    elif self.status =='throw_fix':
                        self.get_logger().info(f"throw")
                        
                        self.sendHeadMotor(1, 2048, 10)
                        if self.object_sizes[5][self.select] > 1800:
                            if self.body_auto:
                                self.sendbodyAuto(0)
                                self.body_auto = False
                                self.time_sleep(3)
                                self.now_speed_x = 0
                            self.sendBodySector(29)
                            self.time_sleep(5)
                            self.sendSingleMotor(15, (self.new_head_h - 2048), 10)
                            self.time_sleep(2)
                            self.sendBodySector(501)
                            self.time_sleep(10)
                            self.sendSingleMotor(15, 150, 10)
                            self.time_sleep(2)
                            self.sendBodySector(502)
                            self.time_sleep(5)
                            self.sendBodySector(29)
                            self.time_sleep(5)
                            self.status = 'Finish'
                        else:
                            self.speed_x = 2000
                            self.theta = 0
                            if not self.body_auto:
                                self.sendbodyAuto(1)
                                self.body_auto = True
                                self.time_sleep(3)
                        
                        
                    if self.body_auto and (self.pre_speed_x != self.speed_x or self.pre_speed_y != self.speed_y or self.pre_theta != self.theta):
                        self.get_logger().info(f"?????????????")
                        self.speed_change()
                        self.sendContinuousValue(self.now_speed_x, self.now_speed_y, self.now_theta)
                        self.pre_speed_x = self.now_speed_x
                        self.pre_theta = self.now_theta
                    self.data_print()
                else:
                    if self.status !='Begin':
                        if self.body_auto:
                            self.sendbodyAuto(0)
                            self.time_sleep(0.5)
                            self.body_auto = False
                        self.initial()
                        self.sendBodySector(50)
                        self.time_sleep(5)
                        self.sendBodySector(29)
                    self.status = 'Begin'
                    self.find_target(1, True)
                    # self.get_logger().info(f"targetx={self.target_pos.x}")
                    # self.get_logger().info(f"targety={self.target_pos.y }")
                    if self.next:
                        if abs(self.target_pos.x - 160) <= 10 and abs(self.target_pos.y - 120) <= 10:
                            # self.get_logger().info(f"targetx={self.target_pos.x}")
                            # self.get_logger().info(f"targety={self.target_pos.y }")
                            self.get_logger().info(f"kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk")
                        else:
                            self.now_head_h, self.now_head_v, delta_head_h, delta_head_v = self.compute_motor_targets(self.target_pos.x, self.target_pos.y, self.new_head_h, self.new_head_v)
                            self.control_head(1, self.now_head_h, 100)
                            self.control_head(2, self.now_head_v, 100)
                            self.new_head_h = self.now_head_h
                            self.new_head_v = self.now_head_v
                            self.get_logger().info(f"targetx={self.target_pos.x}")
                            self.get_logger().info(f"targety={self.target_pos.y }")
                            # self.time_sleep(0.01)
                        self.next = False
                            # self.get_clock().sleep_for(Duration(seconds=0.01))

        except EnvironmentError:
            rclpy.shutdown()

    def control_head(self,ID,position,speed):
        if ID == 1:
            if position > 2548:
                self.now_head_h = 2548
            elif position < 1548:
                self.now_head_h = 1548
            self.sendHeadMotor(1, self.now_head_h, speed)
        elif ID == 2:
            if position > 2048:
                self.now_head_v = 2048
            elif position < 1024:
                self.now_head_v = 1024
            self.sendHeadMotor(2, self.now_head_v, speed)

    def data_print(self):
        self.get_logger().info(f"----------------------------------------------------------------------------------")
        # self.get_logger().info(f"status={self.status}")
        if self.limit_show:
            self.get_logger().debug(f"point={self.point}")
            self.get_logger().debug(f"decrease_limit={self.decrease_limit}")
            self.get_logger().debug(f"stop_limit={self.stop_limit}")
            self.get_logger().debug(f"back_limit={self.back_limit}")
            self.get_logger().debug(f"keep_away_limit={self.keep_away_limit}")
        self.get_logger().info(f"status={self.status}")
        self.get_logger().info(f"target_pos_x={self.target_pos.x}")
        self.get_logger().info(f"target_pos_y={self.target_pos.y}")
        self.get_logger().info(f"now_h={self.now_head_h}")
        self.get_logger().info(f"now_v={self.now_head_v}")
        self.get_logger().info(f"speed_x={self.speed_x}")
        self.get_logger().info(f"speed_y={self.speed_y}")
        self.get_logger().info(f"theta={self.theta}")
        self.get_logger().info(f"----------------------------------------------------------------------------------")

    # def data_print(self):
    #     line = f"status={self.status}"
    #     if self.limit_show:
    #         line += (
    #             f" | point={self.point}"
    #             f" | decrease_limit={self.decrease_limit}"
    #             f" | stop_limit={self.stop_limit}"
    #             f" | back_limit={self.back_limit}"
    #             f" | keep_away_limit={self.keep_away_limit}"
    #         )
    #     line += (
    #         f" | target_pos_x={self.target_pos.x}"
    #         f" | target_pos_y={self.target_pos.y}"
    #         f" | speed_x     ={self.speed_x}"
    #         f" | speed_y     ={self.speed_y}"
    #         f" | theta       ={self.theta}"
    #     )

    #     # 在同一行刷新
    #     sys.stdout.write(f"\r{line:<120}")
    #     sys.stdout.flush()

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