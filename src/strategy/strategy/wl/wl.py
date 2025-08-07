#!/usr/bin/env python
#coding=utf-8

from strategy.API import API
import rclpy
from std_msgs.msg import String
import time

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

HEAD_MOTOR_START = 1433    # 初始位置1456
HEAD_MOTOR_FINISH = 1350    # 舉起前低頭 1263
WIGHT = 80  #change
FLAG1 = False
if WIGHT == 80:
    THIRD_LINE = 214
    SPEED = 1900
    PICK_ONE = 801
    PICK_TWO = 802
    PICK_THREE = 803
    LIFT = 804

elif WIGHT == 40:
    THIRD_LINE = 188
    SPEED = 2000
    PICK_ONE = 401
    PICK_TWO = 402
    PICK_THREE = 403
    LIFT = 404

elif WIGHT == 70:
    THIRD_LINE = 188
    SPEED = 2000
    PICK_ONE = 701
    PICK_TWO = 702
    PICK_THREE = 703
    LIFT = 704

elif WIGHT == 86:
    THIRD_LINE = 200
    SPEED = 2000
    PICK_ONE = 861
    PICK_TWO = 862
    PICK_THREE = 863
    LIFT = 8642

elif WIGHT == 90:
    THIRD_LINE = 230
    SPEED = 2100
    PICK_ONE = 901
    PICK_TWO = 902
    PICK_THREE = 903
    LIFT = 904
    
else:
    SPEED = 1800
    THIRD_LINE = 200
    PICK_ONE = 601
    PICK_TWO = 602
    PICK_THREE = 603
    LIFT = 604


class Strategy(API):
    def __init__(self):
        super().__init__('wl')
        self.get_logger().info('Strategy node started')
        self.cnt = 0
        self.initial()
        self.bar_max = Coordinate(0, 0)
        self.bar_min = Coordinate(0, 0)
        self.bar_center = Coordinate(0, 0)
        self.line_max = Coordinate(0, 0)
        self.line_min = Coordinate(0, 0)
        self.line_center = Coordinate(0, 0)

    def initial(self):
        self.speed_x = 0
        self.speed_y = 0
        self.theta = 0
        self.now_speed_x = 0
        self.now_speed_y = 0
        self.now_theta = 0
        self.pre_speed_x = 0
        self.pre_speed_y = 0
        self.pre_theta = 0
        self.bar_index = None
        self.line_index = None
        self.ctrl_status = 'head_shake'
        self.body_auto = False
        self.third_line = False
        self.stop = True
        self.real_bar_center = 160

    def walk_switch(self):
        time.sleep(0.5)
        # self.sendBodyAuto(500, 0, 0, 0, 1, 0)
        if self.body_auto:
            self.sendBodyAuto(0)
            self.speed_x = 0
            self.speed_y = 0
            self.theta = 0
            self.now_speed_x = 0
            self.now_speed_y = 0
            self.now_theta = 0
            self.body_auto = False
            time.sleep(1.5)
        else:
            self.sendBodyAuto(1)
            self.body_auto = True
        
    def imu_fix(self):
        theta = 0
        if self.imu_rpy[2] > 2:
            theta = -2
        elif self.imu_rpy[2] < -2:
            theta = 1
        return theta
    
    def walk_parameter(self, yaw, Y_COM):
        self.sendSensorReset(1, 1, yaw)
        if WIGHT==80:
            self.sendWalkParameter('save'   , walk_mode = 1
                                            , com_y_shift = Y_COM
                                            , y_swing = 4.5
                                            , period_t = 330
                                            , t_dsp = 0.1
                                            , base_default_z = 1.5
                                            , right_z_shift = 0
                                            , base_lift_z = 3
                                            , com_height = 29.5
                                            , stand_height = 23.5
                                            , back_flag = False)
        else:
            self.sendWalkParameter('save'   , walk_mode = 1
                                            , com_y_shift = Y_COM
                                            , y_swing = 4.5
                                            , period_t = 330
                                            , t_dsp = 0.1
                                            , base_default_z = 2
                                            , right_z_shift = 0
                                            , base_lift_z = 3
                                            , com_height = 29.5
                                            , stand_height = 23.5
                                            , back_flag = False)   
    
    def get_object(self, color, object):
        #object: 0 = line , 1 = bar
        color_mask_subject_size = self.object_sizes[color]
        if color_mask_subject_size:
            size_filter = 3000 if object == 0 else 50
            max_object_size = max(color_mask_subject_size)
            max_object_idx = color_mask_subject_size.index(max_object_size) if max_object_size > size_filter else None
        if max_object_idx is not None:
            if color == 5:
                self.bar_min.x = self.object_x_min[color][max_object_idx]
                self.bar_max.x = self.object_x_max[color][max_object_idx]
                self.bar_min.y = self.object_y_min[color][max_object_idx]
                self.bar_max.y = self.object_y_max[color][max_object_idx]
                self.bar_center.x = (self.edge_min.x + self.edge_max.x) // 2
                self.bar_center.y = (self.edge_min.y + self.edge_max.y) // 2
            elif color == 6:
                self.line_min.x = self.object_x_min[color][max_object_idx]
                self.line_max.x = self.object_x_max[color][max_object_idx]
                self.line_min.y = self.object_y_min[color][max_object_idx]
                self.line_max.y = self.object_y_max[color][max_object_idx]
                self.line_center.x = (self.line_min.x + self.line_max.x) // 2
                self.line_center.y = (self.line_min.y + self.line_max.y) // 2

            # return max_object_idx if max_object_size > size_filter else None

    def run(self):
        try:
            while rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.1)
                if self.is_start:
                    self.get_logger().info(f"ctrl_status : {self.ctrl_status}")
                    if self.ctrl_status == 'head_shake':
                        self.sendBodySector(1618) #20
                        time.sleep(0.5)
                        self.reset(True)    #now
                        self.sendSensorReset(1,1,1)   #before
                        print(THIRD_LINE)
                        self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                        self.stop = False
                        time.sleep(0.5)
                        self.ctrl_status = 'preturn'
                    self.get_object(5, 1)
                    self.get_object(6, 0)
                    if self.ctrl_status == 'preturn':
                        self.get_logger().info(f"DIO_Value = {self.dio}")
                        if not self.body_auto:
                            self.walk_parameter(1, 0)
                            self.walk_switch()
                            if self.dio == 0x06:        #right to left
                                self.sendHeadMotor(2, 1500, 100)
                                self.get_object(5, 1)
                                self.get_object(6, 0)
                                if self.bar_center.x <= 145 or self.bar_center.x > 260: #adjust
                                    self.get_logger().info(f"紅色preturn = {self.bar_center.x}")
                                    self.get_object(5, 1)
                                    self.get_object(6, 0)
                                    self.speed_x = 1000             #adjust
                                    self.speed_y = 700
                                    self.theta = 1
                                else:
                                    self.ctrl_status = 'start_line'
                                    self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                                    time.sleep(0.1)
                                    # self.sendContinuousValue(1000, 700, 0, 1, 0)
                                # while self.bar_center.x <= 145 or self.bar_center.x > 260: #143
                                #     self.get_object(5, 1)
                                #     self.get_object(6, 0)
                                #     self.speed_x = 1000
                                #     self.speed_y = 700
                                #     self.theta = 1
                                #     # self.sendContinuousValue(1000, 700, 0, 1, 0)
                                #     self.get_logger().info(f"紅色preturn = {self.bar_center.x}")
                            elif self.dio == 0x0E:      #left to right
                                self.sendHeadMotor(2, 1500, 100)
                                self.get_object(5, 1)
                                self.get_object(6, 0)
                                if self.bar_center.x >= 162 or self.bar_center.x <= 30:
                                    self.get_object(5, 1)
                                    self.get_object(6, 0)
                                    self.speed_x = 1000         #adjust
                                    self.speed_y = -1100
                                    self.theta = 0
                                else:
                                    self.ctrl_status = 'start_line'
                                    self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                                    time.sleep(0.1)
                    elif self.ctrl_status == 'start_line':
                        self.get_logger().info(f"imu ========= {self.imu_rpy[2]}")
                        if self.imu_rpy[2] > 1.5 or self.imu_rpy[2] < -1.5:
                            if self.bar_center.x > 156:
                                self.speed_x = 1000
                                self.speed_y = -300
                                self.theta = -1
                                self.get_logger().info(f"右轉")
                            elif self.bar_center.x < 149 and self.bar_center.x > 0:
                                self.speed_x = 1000
                                self.speed_y = 0
                                self.theta = 1
                                self.get_logger().info(f"左轉")
                        else:
                            if self.bar_center.x > 156:
                                self.speed_x = 1000
                                self.speed_y = -500
                                self.theta = 0
                                self.get_logger().info(f"右平移")
                            elif self.bar_center.x < 149 and self.bar_center.x > 0:
                                self.speed_x = 1000
                                self.speed_y = 100
                                self.theta = 0
                                self.get_logger().info(f"左平移")
                            else:
                                if not self.body_auto:
                                    self.walk_parameter(1, 0)
                                    self.walk_switch()
                                self.speed_x = SPEED
                                self.speed_y = 0
                                self.theta = self.imu_fix()
                        self.get_logger().info(f"紅色 = {self.bar_center.x}")
                        if self.bar_center.y >= 224:
                            self.ctrl_status = 'turn_straight'
                    elif self.ctrl_status == 'turn_straight':
                        self.speed_x = 0
                        self.speed_y = 0
                        self.theta = self.imu_fix()
                        if self.theta == 0:
                            self.ctrl_status = 'pick_up'
                    elif self.ctrl_status == 'pick_up':
                        if self.body_auto:
                            self.walk_switch()
                        self.sendHeadMotor(2, 1320, 100)
                        self.sendBodySector(PICK_ONE)
                        self.get_logger().info(f"PICK_ONE")
                        time.sleep(6.5)
                        self.sendBodySector(PICK_TWO)
                        self.get_logger().info(f"PICK_TWO")
                        time.sleep(5.0)
                        self.sendBodySector(PICK_THREE)
                        self.get_logger().info(f"PICK_THREE")
                        time.sleep(5.5)
                        self.get_object(5, 1)
                        self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                        time.sleep(0.3)
                        self.real_bar_center = self.bar_center.x 
                        self.ctrl_status = 'second_line'
                    elif self.ctrl_status == 'second_line':
                        if not self.body_auto:
                            self.walk_parameter(0, -2)
                            self.walk_switch()
                        self.speed_x = SPEED
                        self.speed_y = -100
                        self.theta = self.imu_fix()
                        self.get_logger().info(f"white_YYY = {self.line_min.y}")
                        if self.line_min.y <= 95 and self.line_min.y > 75:
                            self.third_line = True 
                        self.get_logger().info(f"self.third_line = {self.third_line}")
                        self.get_logger().info(f"white_Y = {self.line_max.y}")
                        self.sendHeadMotor(2, 1400, 100)
                        if self.line_max.y >= THIRD_LINE and self.third_line:
                            self.ctrl_status = 'rise_up'
                            time.sleep(3.4)
                    elif self.ctrl_status == 'rise_up':
                        if self.body_auto:
                            self.walk_switch()
                        self.sendBodySector(LIFT)
                        self.get_logger().info(f"LIFT")
                        if WIGHT==90:
                            time.sleep(10)#90
                        else:
                            time.sleep(17)#80
                        self.get_logger().info(f"x =============================== {self.real_bar_center}")
                        if self.real_bar_center > 165 and self.real_bar_center < 210:
                            count = (self.real_bar_center - 165) // 7
                            count = min(count, 4)
                            count+=1
                            print("count",count)
                            for i in range(count):
                                self.sendBodySector(605)
                            time.sleep(3.5) 
                        elif self.real_bar_center < 155 and self.real_bar_center > 120:
                            count = (165 - self.real_bar_center) // 7
                            count = min(count, 4)
                            print("count",count)
                            for i in range(count):
                                self.sendBodySector(606)       
                            time.sleep(3.5) 
                        if (FLAG1):
                            if WIGHT==80:
                                # send.sendBodySector(8889) #field1內
                                self.sendBodySector(8880) #field2/field1外
                                time.sleep(1)
                            elif WIGHT==40:
                                time.sleep(1)
                            elif WIGHT==86:
                                # send.sendBodySector(8680) #field1外
                                time.sleep(1)
                            elif WIGHT==90:
                                time.sleep(1)
                            else:
                                self.sendBodySector(6660) #2
                                # send.sendBodySector(6661) #field1外面
                                time.sleep(1)
                        self.ctrl_status = 'final'
                    elif self.ctrl_status == 'final':
                        if not self.body_auto:
                            self.walk_parameter(0, -1)
                            self.walk_switch()
                        if self.speed_x < 1800:
                            self.speed_x += 200
                        self.speed_y = 100
                        self.theta = self.imu_fix()

                    if self.body_auto and (self.pre_speed_x != self.speed_x or self.pre_speed_y != self.speed_y or self.pre_theta != self.theta):
                        self.get_logger().info(f"?????????????")
                        self.speed_change()
                        self.sendContinuousValue(self.now_speed_x, self.now_speed_y, self.now_theta)
                        self.pre_speed_x = self.now_speed_x
                        self.pre_theta = self.now_theta

                else:
                    self.get_object(5, 1)
                    self.get_object(6, 0)
                    img_object = (self.object_x_min[5][0] + self.object_x_max[5][0]) // 2
                    self.get_logger().info(f"x =============================== {self.bar_center.x}")
                    self.get_logger().info(f"x =============================== {img_object}")
                    time.sleep(1)
                    if self.body_auto:
                        self.walk_switch()
                    if not self.stop:
                        self.sendHeadMotor(2, HEAD_MOTOR_FINISH, 100)
                        self.initial()
                        self.get_logger().info(f"stop")

        except EnvironmentError:
            rclpy.shutdown()

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