#!/usr/bin/env python
#coding=utf-8

from strategy.API import API
import rclpy
from std_msgs.msg import String
import time
from rclpy.executors import MultiThreadedExecutor


HEAD_MOTOR_START = 1150    # 初始位置1456
# HEAD_MOTOR_SECOND = 1300 
# HEAD_MOTOR_FINISH = 1350    # 舉起前低頭 1263
WIGHT = 20  #change
# FLAG1 = False
if WIGHT == 20:
    THIRD_LINE  = 153
    PICK_ONE    = 1002
    PICK_TWO    = 1003
    PICK_THREE  = 1004
    LIFT        = 1105

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
        self.cnt = 0
        self.create_timer(0.05, self.run)

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
        # time.sleep(0.5)
        if self.body_auto:
            self.sendbodyAuto(0)
            self.speed_x = 3000
            self.speed_y = 500
            self.theta = 3
            self.now_speed_x = 0
            self.now_speed_y = 0
            self.now_theta = 0
            self.body_auto = False
        else:
            self.sendbodyAuto(1)
            self.body_auto = True
        
    def imu_fix(self):
        theta = 0
        if self.imu_rpy[2] > 3:
            theta = -2
        elif self.imu_rpy[2] < -3:
            theta = 2
        return theta
    
    def walk_parameter(self):
        self.sendSensorReset(True)
        self.sendWalkParameter(
            mode = 0,
            com_y_shift = 0.0, 
            y_swing = 0.0, 
            period_t = 420, 
            t_dsp = 0.0, 
            base_default_z = 5.0, 
            stand_height = 40.0,
            com_height = 50.0, 
            Stand_Balance = False,
            Hip_roll =-3.0,
            Ankle_roll =0.0
        )
    
    def get_object(self, color, kind):
        """
        kind: 0 = line(白), 1 = bar(紅)
        回傳 True 表示找到合格目標，並更新 center/min/max；否則回 False。
        """
        try:
            sizes = self.object_sizes[color]
            xmins = self.object_x_min[color]
            xmaxs = self.object_x_max[color]
            ymins = self.object_y_min[color]
            ymaxs = self.object_y_max[color]
            count = int(self.color_counts[color])
        except Exception:
            return False

        n = min(count, len(sizes), len(xmins), len(xmaxs), len(ymins), len(ymaxs))
        if n <= 0:
            return False

        size_filter = 3000 if kind == 0 else 50   # 線用大些門檻、棒子用小些門檻
        best_i = max(range(n), key=lambda i: sizes[i])
        if sizes[best_i] < size_filter:
            return False

        if color ==5:  # red bar
            self.bar_min.x = xmins[best_i]
            self.bar_max.x = xmaxs[best_i]
            self.bar_min.y = ymins[best_i]
            self.bar_max.y = ymaxs[best_i]
            self.bar_center.x = (self.bar_min.x + self.bar_max.x) // 2
            self.bar_center.y = (self.bar_min.y + self.bar_max.y) // 2
        elif color == 6:  # white line
            self.line_min.x = xmins[best_i]
            self.line_max.x = xmaxs[best_i]
            self.line_min.y = ymins[best_i]
            self.line_max.y = ymaxs[best_i]
            self.line_center.x = (self.line_min.x + self.line_max.x) // 2
            self.line_center.y = (self.line_min.y + self.line_max.y) // 2

        return True


    def run(self):
        if self.is_start:
            red_found  = self.get_object(5, 1)   # bar
            white_found = self.get_object(6, 0)  # line

            # self.sendBodySector(75)
            self.get_logger().info(f"ctrl_status : {self.ctrl_status}")
            self.get_logger().info(f"DIO_Value = {self.dio}")
            if self.ctrl_status == 'head_shake':
                self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                if self.color_counts[5] < 1:
                    if not self.body_auto:
                        print("notttttttttttttttttttttttt")
                        # self.walk_parameter()
                        self.walk_switch()
                    self.sendContinuousValue(5000,300,0)
                    # self.speed_x = 5000             #adjust
                    # self.speed_y = 500
                    # self.theta = 5
                else:
                    # if not self.body_auto:
                    #     print("notttttttttttttttttttttttt")
                    #     # self.walk_parameter()
                    #     self.walk_switch()
                    self.ctrl_status = 'start_line'
                # self.sendBodySector(1618) #20
                # time.sleep(0.5)
                # self.sendSensorReset(True)   #now
                # self.sendSensorReset(1,1,1)   #before
                self.sendSensorReset(True)   #after
                self.get_logger().info(f"ctrl_status{THIRD_LINE}")
                self.stop = False
                time.sleep(0.5)
                # self.ctrl_status = 'start_line'
            self.get_object(5, 1)
            self.get_object(6, 0)
            if self.ctrl_status == 'preturn':
                self.get_logger().info(f"DIO_Value = {self.dio}")
                if not self.body_auto:
                    # self.walk_parameter()
                    self.walk_switch()
                    if self.dio == 0x06:        #right to left
                        self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                        self.get_object(5, 1)
                        self.get_object(6, 0)
                        if self.bar_center.x <= 145 or self.bar_center.x > 260: #adjust
                            self.get_logger().info(f"紅色preturn = {self.bar_center.x}")
                            self.get_object(5, 1)
                            self.get_object(6, 0)
                            self.speed_x = 5000             #adjust
                            self.speed_y = 4000
                            self.theta = -1
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
                    elif self.dio == 0x0A:      #left to right
                        self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                        self.get_object(5, 1)
                        self.get_object(6, 0)
                        if self.bar_center.x >= 162 or self.bar_center.x <= 30:
                            self.get_object(5, 1)
                            self.get_object(6, 0)
                            self.speed_x = 5000         #adjust
                            self.speed_y = -4000
                            self.theta = -1
                        else:
                            self.ctrl_status = 'start_line'
                            self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                            time.sleep(0.1)
                    else:
                        self.speed_x = 5500         #adjust
                        self.speed_y = 0
                        self.theta = 0
                        self.ctrl_status = 'start_line'
                        self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                        time.sleep(0.1)

            elif self.ctrl_status == 'start_line':
                self.get_logger().info(f"imu ========= {self.imu_rpy[2]}")
                if self.imu_rpy[2] > 1.5 or self.imu_rpy[2] < -1.5:   #yyyy
                    if self.bar_center.x > 156:
                        self.speed_x = 5000
                        self.speed_y = 0
                        self.theta = -2
                        self.get_logger().info(f"右轉")
                    elif self.bar_center.x < 149 and self.bar_center.x > 0:
                        self.speed_x = 5000
                        self.speed_y = 0
                        self.theta = 2
                        self.get_logger().info(f"左轉")
                else:
                    if self.bar_center.x > 156:
                        self.speed_x = 5000
                        self.speed_y = -3000
                        self.theta = 0
                        self.get_logger().info(f"右平移")
                    elif self.bar_center.x < 149 and self.bar_center.x > 0:
                        self.speed_x = 5000
                        self.speed_y = 4000
                        self.theta = 0
                        self.get_logger().info(f"左平移")
                    else:
                        if not self.body_auto:
                            # self.walk_parameter()
                            self.walk_switch()
                        self.speed_x = 5000
                        self.speed_y = 0
                        self.theta = self.imu_fix()
                # else:
                #     self.speed_x = 4500
                #     self.speed_y = 0  
                #     self.theta = 0
                self.get_logger().info(f"紅色x = {self.bar_center.x}")
                self.get_logger().info(f"紅色y = {self.bar_center.y}")
                self.get_logger().info(f"紅色y = {self.bar_max.y}")
            # 原本：if self.object_y_max[5][0] >= 180 :
                if self.bar_max.y >= 186:
                    self.ctrl_status = 'pick_up'
                #     self.sendHeadMotor(2, HEAD_MOTOR_SECOND, 100)
                #     self.speed_x = 4500
                #     self.speed_y = 0  
                #     self.theta = 0
                #     first_count = 1
                # elif first_count == 1 and self.bar_center.y >= 120:
                #     self.speed_x = 4500
                #     self.speed_y = 0  
                #     self.theta = 0
                #     first_count = 2
                    # self.ctrl_status = 'turn_straight'
                    # self.ctrl_status = 'pick_up'
                
            elif self.ctrl_status == 'turn_straight':
                self.speed_x = 0
                self.speed_y = 0
                self.theta = self.imu_fix()
                if self.theta == 0:
                    self.ctrl_status = 'pick_up'
            elif self.ctrl_status == 'pick_up':
                if self.body_auto:
                    self.walk_switch()

                time.sleep(3)
                self.sendBodySector(29)
                time.sleep(0.5)
                self.sendBodySector(81)
                time.sleep(0.5)
                self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                self.sendBodySector(PICK_ONE)
                self.get_logger().info(f"PICK_ONE")
                time.sleep(8)     #12
                self.sendBodySector(PICK_TWO)
                self.get_logger().info(f"PICK_TWO")
                time.sleep(5)    #10.5
                self.sendBodySector(PICK_THREE)
                self.get_logger().info(f"PICK_THREE")
                time.sleep(8)      #6
                self.get_object(5, 1)
                self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                # self.sendBodySector(76)
                # time.sleep(0.3)
                self.real_bar_center = self.bar_center.x 
                self.ctrl_status = 'second_line'
            elif self.ctrl_status == 'second_line':
                self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                if not self.body_auto:
                    # self.walk_parameter()
                    self.walk_switch()
                # self.speed_x = 6000
                # self.speed_y = 0
                # self.theta = self.imu_fix()
                self.sendContinuousValue(6000, 0, self.imu_fix())

                self.get_logger().info(f"white_YYY = {self.line_min.y}")
                if self.line_min.y <= 95 and self.line_min.y > 75:
                    self.third_line = True 
                self.get_logger().info(f"self.third_line = {self.third_line}")
                self.get_logger().info(f"white_Y = {self.line_max.y}")
                if self.line_max.y >= THIRD_LINE and self.third_line:
                    self.ctrl_status = 'rise_up'
                    time.sleep(10)
                    self.sendHeadMotor(2, 1024, 100)
            elif self.ctrl_status == 'rise_up':
                if self.body_auto:
                    self.walk_switch()
                time.sleep(1)
                self.sendHeadMotor(2, 1024, 100)
                self.sendBodySector(LIFT)
                self.get_logger().info(f"LIFT")
                time.sleep(10)
                self.sendBodySector(78)
                time.sleep(2)
                self.sendBodySector(77)
                time.sleep(2)
                # self.get_logger().info(f"x =============================== {self.real_bar_center}")
                # if self.real_bar_center > 165 and self.real_bar_center < 210:
                #     count = (self.real_bar_center - 165) // 7
                #     count = min(count, 4)
                #     count+=1
                #     self.get_logger().info(f"count{count}")
                #     for i in range(count):
                #         self.sendBodySector(605)
                #     time.sleep(3.5) 
                # elif self.real_bar_center < 155 and self.real_bar_center > 120:
                #     count = (165 - self.real_bar_center) // 7
                #     count = min(count, 4)
                #     self.get_logger().info(f"count{count}")
                #     for i in range(count):
                #         self.sendBodySector(606)       
                #     time.sleep(3.5) 
                # if (FLAG1):
                #     if WIGHT==80:
                #         # send.sendBodySector(8889) #field1內
                #         self.sendBodySector(8880) #field2/field1外
                #         time.sleep(1)
                #     elif WIGHT==40:
                #         time.sleep(1)
                #     elif WIGHT==86:
                #         # send.sendBodySector(8680) #field1外
                #         time.sleep(1)
                #     elif WIGHT==90:
                #         time.sleep(1)
                #     else:
                #         self.sendBodySector(6660) #2
                #         # send.sendBodySector(6661) #field1外面
                #         time.sleep(1)
                self.ctrl_status = 'final'
            elif self.ctrl_status == 'final':
                if not self.body_auto:
                    # self.walk_parameter()
                    self.walk_switch()
                self.speed_x = 6000
                self.speed_y = 0
                self.theta = self.imu_fix()
                # if self.speed_x < 5500:
                #     self.speed_x += 500
                # self.speed_y = 0
                # self.theta = self.imu_fix()

            if self.body_auto and (self.pre_speed_x != self.speed_x or self.pre_speed_y != self.speed_y or self.pre_theta != self.theta):
                self.get_logger().info(f"?????????????")
                # self.speed_change()
                self.sendContinuousValue(self.now_speed_x, self.now_speed_y, self.now_theta)
                self.pre_speed_x = self.now_speed_x
                self.pre_theta = self.now_theta

        else:
            if self.color_counts[6] > 0 :#self.color_counts[6] > 0 :
                self.get_object(6, 1)
                # self.get_object(6, 0)
                # img_object = (self.object_x_min[5][0] + self.object_x_max[5][0]) // 2
                # self.get_logger().info(f"x =============================== {self.bar_center.x}")
                self.get_logger().info(f"line_center_y =============================== {self.line_center.y}")
                self.get_logger().info(f"line_center_x =============================== {self.line_center.x}")
                # self.get_logger().info(f"write_y =============================== {self.object_y_max[6][0]}")
                # time.sleep(1)
            else:
                self.get_logger().info(f"no line")
            if self.body_auto:
                self.walk_switch()
            if not self.stop:
                self.sendHeadMotor(2, 1150, 100)
                self.initial()
                self.get_logger().info(f"stop")
            

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
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()