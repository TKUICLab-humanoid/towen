#!/usr/bin/env python
#coding=utf-8

from strategy.API import API
import rclpy
from std_msgs.msg import String
import time
from rclpy.executors import MultiThreadedExecutor


HEAD_MOTOR_START = 1170    # 初始位置1456
PRETURN = False
FIX_LEG_FLAG = False

THETA_FIX = -1
WALKING = [[3000,0,0],
           [3000,0,0],
           [3000,0,0]]

WIGHT = 20  #change 
SHIFT_LEFT  = 81
SHIFT_RIGHT = 82
# FLAG1 = False
if WIGHT == 20:
    THIRD_LINE  = 190
    PICK_ONE    = 1002
    PICK_TWO    = 1003
    # PICK_THREE  = 1004
    LIFT        = 1004
    DOWN        = 1234
    FIX_LEG     = 23

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
        self.ctrl_status = 'preturn' if PRETURN else 'head_shake'
        self.stand = True
        self.third_line = False
        self.stop = True
        self.real_bar_center = 160

    def walk_switch(self):
        if self.stand:
            time.sleep(1.5)
            self.sendbodyAuto(1)
            # if self.ctrl_status == "start_line":
            #     self.speed_x = WALKING[0][0]
            #     self.speed_y = WALKING[0][1]
            #     self.theta   = WALKING[0][2]
            # elif self.ctrl_status == "second_line":
            #     self.speed_x = WALKING[1][0]
            #     self.speed_y = WALKING[1][1]
            #     self.theta   = WALKING[1][2]
            # elif self.ctrl_status == "final":
            #     self.speed_x = WALKING[2][0]
            #     self.speed_y = WALKING[2][1]
            #     self.theta   = WALKING[2][2]
            # else:
            self.speed_x = 5500
            self.speed_y = 0
            self.theta   = self.imu_fix() + THETA_FIX

            self.now_speed_x = 0
            self.now_speed_y = 0
            self.now_theta = 0
            self.stand = False
        else:
            self.sendbodyAuto(0)
            self.stand = True
    
    def change_walking_speed(self):
        if not self.stand:
            if self.now_speed_x != self.speed_x:
                self.now_speed_x += 50 * ((self.speed_x > self.now_speed_x) - (self.speed_x < self.now_speed_x))
            if self.now_speed_y != self.speed_y:
                self.now_speed_y += 100 * ((self.speed_y > self.now_speed_y) - (self.speed_y < self.now_speed_y))
            if self.now_theta != self.theta:
                self.now_theta += 1 * ((self.theta > self.now_theta) - (self.theta < self.now_theta))
            print("now_speed_x",self.now_speed_x)
            print("now_speed_y",self.now_speed_y)
            print("now_theta",self.now_theta)
            self.sendContinuousValue(self.now_speed_x,self.now_speed_y,self.now_theta)

    def imu_fix(self):
        theta = 0
        if self.imu_rpy[2] > 2:
            theta = -2
        elif self.imu_rpy[2] < -2:
            theta = 4
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
        color: 5 = red, 6 = white
        kind: 0 = line, 1 = bar
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
            self.get_logger().info(f"ctrl_status : {self.ctrl_status}")
            self.get_logger().info(f"DIO_Value = {self.dio}")

            self.change_walking_speed() #更新當前速度
            if self.ctrl_status == 'head_shake':
                self.sendHeadMotor(1, 2048, 100)
                self.sendHeadMotor(2, 1350, 100)
                if self.color_counts[5] < 1:
                    if self.stand:
                        self.walk_switch()
                else:
                    self.ctrl_status = 'start_line'
                self.sendSensorReset(True)   #after
                self.get_logger().info(f"ctrl_status{THIRD_LINE}")
                self.stop = False
                # time.sleep(0.5)

            self.get_object(5, 1) #bar
            self.get_object(6, 0) #line

            self.get_logger().info(f"line_center_y =============================== {self.line_center.y}")
            self.get_logger().info(f"line_center_x =============================== {self.line_center.x}")
            self.get_logger().info(f"紅色x = {self.bar_center.x}")
            self.get_logger().info(f"紅色y = {self.bar_center.y}")
            self.get_logger().info(f"紅色y = {self.bar_max.y}")
            if self.ctrl_status == 'preturn':
                self.get_logger().info(f"DIO_Value = {self.dio}")
                if self.stand:
                    self.walk_switch()
                    if self.dio == 0x06:        #right to left
                        self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                        if self.bar_center.x <= 145 or self.bar_center.x > 260: #adjust
                            self.get_logger().info(f"紅色preturn = {self.bar_center.x}")
                            self.speed_x = 5000             #adjust
                            self.speed_y = 4000
                            self.theta = -1
                        else:
                            self.ctrl_status = 'start_line'
                            self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                            time.sleep(0.1)

                    elif self.dio == 0x0A:      #left to right
                        self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                        if self.bar_center.x >= 162 or self.bar_center.x <= 30:
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
                # self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                if self.bar_center.x > 170:
                    self.speed_x = 3000
                    self.speed_y = -1000
                    if self.imu_rpy[2] > 1.5:
                        self.theta = -4
                    elif self.imu_rpy[2] < -1.5:
                        self.theta = 4
                    else:
                        self.theta = 0
                    self.get_logger().info(f"右平移")
                elif self.bar_center.x < 149 and self.bar_center.x > 0:
                    self.speed_x = 3000
                    self.speed_y = 2000
                    if self.imu_rpy[2] > 1.5:
                        self.theta = -4
                    elif self.imu_rpy[2] < -1.5:
                        self.theta = 4
                    else:
                        self.theta = 0
                    self.get_logger().info(f"左平移")
                else:
                    self.speed_x = 5000
                    self.speed_y = 0
                    self.theta = self.imu_fix()

            # 原本：if self.object_y_max[5][0] >= 180 :
                if self.bar_max.y >= 150:
                    self.sendHeadMotor(2, HEAD_MOTOR_START, 0)
                    self.ctrl_status = 'ready_pick_up'
                    time.sleep(1.5)
            
            elif self.ctrl_status == 'ready_pick_up':
                if self.bar_max.y >= 186:
                    self.ctrl_status = 'pick_up'
                else:
                    if self.bar_center.x > 170:
                        self.speed_x = 2000
                        self.speed_y = -1000
                        if self.imu_rpy[2] > 1.5:
                            self.theta = -2
                        elif self.imu_rpy[2] < -1.5:
                            self.theta = 4
                        else:
                            self.theta = 0
                        self.get_logger().info(f"右平移")
                    elif self.bar_center.x < 149 and self.bar_center.x > 0:
                        self.speed_x = 2000
                        self.speed_y = 1000
                        if self.imu_rpy[2] > 1.5:
                            self.theta = -2
                        elif self.imu_rpy[2] < -1.5:
                            self.theta = 4
                        else:
                            self.theta = 0
                        self.get_logger().info(f"左平移")
                    else:
                        self.speed_x = 2000
                        self.speed_y = 0
                        self.theta = self.imu_fix()

            elif self.ctrl_status == 'turn_straight':
                self.speed_x = 0
                self.speed_y = 0
                self.theta = self.imu_fix()
                if self.theta == 0:
                    self.ctrl_status = 'pick_up'
                    
            elif self.ctrl_status == 'pick_up':
                if not self.stand:
                    self.walk_switch()

                time.sleep(3)
                self.sendBodySector(29)
                time.sleep(0.5)
                self.sendBodySector(300)
                time.sleep(1)
                self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                self.sendBodySector(PICK_ONE)
                self.get_logger().info(f"PICK_ONE")
                time.sleep(8)     #12
                self.sendBodySector(PICK_TWO)
                self.get_logger().info(f"PICK_TWO")
                time.sleep(14)    #10.5
                self.sendBodySector(21)
                time.sleep(3)
      
                self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                while (self.real_bar_center < 150 or self.real_bar_center > 170):
                    self.get_object(5, 1)
                    self.real_bar_center = self.bar_center.x 
                    print("real_bar_center",self.real_bar_center)
                    if self.real_bar_center < 150:
                        self.sendBodySector(SHIFT_RIGHT)
                        time.sleep(0.5)
                    elif self.real_bar_center > 170:
                        self.sendBodySector(SHIFT_LEFT)
                        time.sleep(0.5)

                self.ctrl_status = 'second_line'
            elif self.ctrl_status == 'second_line':
                self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                if self.stand:
                    self.walk_switch()
                time.sleep(4)
                self.ctrl_status = 'seek_rise_line'

            elif self.ctrl_status == 'seek_rise_line':
                self.sendContinuousValue(4000, 0, self.imu_fix()+THETA_FIX)
                self.get_logger().info(f"white_YYY = {self.line_min.y}")
                if self.line_min.y <= 95 and self.line_min.y > 75:
                    self.third_line = True 
                self.get_logger().info(f"self.third_line = {self.third_line}")
                self.get_logger().info(f"white_Y = {self.line_max.y}")
                self.theta = self.imu_fix()
                if self.line_max.y >= THIRD_LINE and self.third_line:
                    self.ctrl_status = 'rise_up'
                    time.sleep(3)
                    self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
            elif self.ctrl_status == 'rise_up':
                if not self.stand:
                    self.walk_switch()
                time.sleep(4)
                self.sendHeadMotor(2, HEAD_MOTOR_START, 100)
                self.sendBodySector(LIFT)
                self.get_logger().info(f"LIFT")
                time.sleep(6)
                self.sendBodySector(DOWN)
                time.sleep(4)
                if FIX_LEG_FLAG:
                    self.sendBodySector(FIX_LEG)
                    time.sleep(1)
                self.sendWalkParameter(
                    mode = 0,
                    com_y_shift = -3.0, 
                    y_swing = 0.0, 
                    period_t = 420, 
                    t_dsp = 0.0, 
                    base_default_z = 6.5, 
                    stand_height = 40.0,
                    com_height = 50.0, 
                    Stand_Balance = False,
                    Hip_roll =0.0,
                    Ankle_roll =0.0
                )
                self.now_speed_x = 0
                self.now_speed_y = 0
                self.now_theta = 0
                
                self.ctrl_status = 'final'
            elif self.ctrl_status == 'final':
                if self.stand:
                    self.walk_switch()
                self.speed_x = 6000
                self.speed_y = 0
                self.theta = self.imu_fix()
 

            if self.stand and (self.pre_speed_x != self.speed_x or self.pre_speed_y != self.speed_y or self.pre_theta != self.theta):
                self.get_logger().info(f"?????????????")
                # self.speed_change()
                self.sendContinuousValue(self.now_speed_x, self.now_speed_y, self.now_theta)
                self.pre_speed_x = self.now_speed_x
                self.pre_theta = self.now_theta

        else:
            self.sendSensorReset(True)
            if self.color_counts[6] > 0 :#self.color_counts[6] > 0 :
                self.get_object(5, 1)
                self.get_object(6, 0)
                # self.get_object(6, 0)
                # img_object = (self.object_x_min[5][0] + self.object_x_max[5][0]) // 2
                # self.get_logger().info(f"x =============================== {self.bar_center.x}")
                self.get_logger().info(f"line_center_y =============================== {self.line_center.y}")
                self.get_logger().info(f"line_center_x =============================== {self.line_center.x}")
                self.get_logger().info(f"紅色x = {self.bar_center.x}")
                self.get_logger().info(f"紅色y = {self.bar_center.y}")
                self.get_logger().info(f"紅色y = {self.bar_max.y}")
                # self.get_logger().info(f"write_y =============================== {self.object_y_max[6][0]}")
                # time.sleep(1)
            else:
                self.get_logger().info(f"no line")
            if not self.stand:
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