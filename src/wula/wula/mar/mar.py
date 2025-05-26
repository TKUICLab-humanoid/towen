# #!/usr/bin/env python3
# #coding=utf-8

# import rclpy
# import rclpy.logging
# from rclpy.node import Node
# from wula.mar.API import Sendmessage 
# import math
# import random

# from collections import Counter, deque
# import numpy as np
# import time
# # import cv2
# import math

# ORIGIN_THETA = 0
# ORIGIN_SPEED = 2800

# class Coordinate:
#     def __init__(self, x, y):
#         self.x, self.y = x, y
#     def __add__(self, other):
#         return Coordinate((self.x + other.x), (self.y + other.y))
#     def __sub__(self, other):
#         return Coordinate((self.x - other.x), (self.y - other.y))
#     def __floordiv__(self, other):
#         return Coordinate((self.x // other), (self.y // other))

# class Mar(Node):
#     def __init__(self):
#         super().__init__('mar')
#         self.send = Sendmessage()
#         self.initial()
#         self.speed_x = 0
#         self.speed_y = 0
#         self.theta = 0
#         self.seek_line = Seek_line()
#         self.arrow_center = Coordinate(0, 0)
#         self.arrow_temp = deque(['None', 'None', 'None', 'None', 'None'], maxlen = 5) 
    
#     def initial(self):
#         self.status = 'First'
#         self.can_turn_flag = False                                         
#         self.arrow_flag = False
#         self.turn_now_flag = False
#         self.arrow_cnt_times = 0
#         self.yaw_temp = 0                                  
#         self.line_status = 'online'
#         # self.send.sendHeadMotor(2, 1350, 50)
#         # self.send.sendHeadMotor(1, 2048, 50)
#         self.send.reset(True)

#     def theta_value(self):#判斷斜率
#         slope = self.seek_line.calculate_slope()
#         print("slope", slope)
#         middle_point = (self.seek_line.upper_center + self.seek_line.lower_center) // 2
#         if middle_point.y > 180:
#             if self.seek_line.lower_center.x > 220:
#                 self.theta = -5 + ORIGIN_THETA
#                 self.speed_x = ORIGIN_SPEED
#             elif self.seek_line.lower_center.x < 80:
#                 self.theta = 6+ ORIGIN_THETA
#                 self.speed_x = ORIGIN_SPEED
#             else:   
#                 self.line_status = 'arrow'#進入第二階段的指標，線在機器人螢幕的正下方
#                 rclpy.loginfo(f'line in image = {self.line_status}')
#         else:           
#             if abs(slope) >= 15:
#                 self.theta = ORIGIN_THETA
#                 self.speed_x = ORIGIN_SPEED + 500
#             elif 7 <= abs(slope) < 15:
#                 self.theta = 0
#                 self.speed_x = ORIGIN_SPEED + 400
#             elif 4 <= abs(slope) < 7:
#                 self.theta = 1 if slope > 0 else -1
#                 self.speed_x = ORIGIN_SPEED + 300
#             elif 1.5 <= abs(slope) < 4:
#                 self.theta = 3 if slope > 0 else -2
#                 self.speed_x = ORIGIN_SPEED + 200
#             else:
#                 self.theta = 4 if slope > 0 else -4
#                 self.speed_x = ORIGIN_SPEED + 100
#             if middle_point.x == 0 and middle_point.y == 0:
#                 self.theta = ORIGIN_THETA
#                 self.speed_x = ORIGIN_SPEED
#             elif self.seek_line.lower_center.x < 130 and abs(slope) > 2:
#                 self.theta = 5 + ORIGIN_THETA
#                 self.speed_x = ORIGIN_SPEED
#             elif self.seek_line.lower_center.x > 170 and abs(slope) > 2:
#                 self.theta = -5 + ORIGIN_THETA
#                 self.speed_x = ORIGIN_SPEED
#             self.line_status = 'online'
#         # rclpy.logdebug(f'speed = {self.speed_x}')
#         # rclpy.logdebug(f'theta = {self.theta}')

#     def line_to_arrow(self):
#         slope = self.seek_line.calculate_slope()
#         if abs(slope) > 15:
#             self.theta = 0 + ORIGIN_THETA
#             self.speed_x = 0
#             self.arrow_cnt_times += 1
#         elif 7 < abs(slope) < 15:
#             self.theta = 1 if slope > 0 else -2 
#         elif abs(slope) < 7:
#             self.theta = 3 if slope > 0 else -4
#             self.speed_x = 500
#             self.speed_y = -500 if slope > 0 else -800
#         if self.arrow_cnt_times >= 5:
#             # self.send.sendSensorReset(0, 0, 1)
#             # self.yaw_temp = send.imu_value_Yaw
#             self.arrow_cnt_times = 0
#             self.speed_y = 0
#             # self.send.sendHeadMotor(2, 1500, 50)
#             self.status = 'Arrow_Part'

#     def arrow_yolo(self):
#         # self.arrow_center.x, self.arrow_center.y = 0, 0
#         # self.arrow_temp.append(send.yolo_Label)
#         # rclpy.loginfo(f" arrow list: {self.arrow_temp}")
#         # arrow_cnt_temp = len(set(self.arrow_temp))
#         # if arrow_cnt_temp == 1 and self.arrow_temp[0] != 'None':
#         #     self.can_turn_flag = False
#         #     if self.arrow_temp[0] == 'left' or self.arrow_temp[0] == 'right':
#         #         rclpy.logwarn("!!!!!!! set can_tuen_flag")
#         #         self.can_turn_flag = True
#         #     self.arrow_center.y = send.yolo_Y
#         #     self.arrow_center.x = send.yolo_X
#         #     send.drawImageFunction(1, 1, send.yolo_XMin, send.yolo_XMax, send.yolo_YMin, send.yolo_YMax, 255, 0, 0)
#         #     return True
#         return False

#     def yaw_calculate(self):
#         if -240 > self.yaw - self.yaw_temp:
#                 self.yaw = self.yaw + 360
#         elif self.yaw - self.yaw_temp > 240:
#                 self.yaw = self.yaw - 360

#     def arrow_turn(self):
#         pass
#         # self.yaw = self.send.imu_value_Yaw
#         # print("yaw = ", send.imu_value_Yaw)
#         # # self.yaw_calculate()
#         # if self.arrow_temp[0] == 'right':
#         #     rclpy.logdebug(f'箭頭：右轉')
#         #     send.sendContinuousValue(2000, 0, -5 + ORIGIN_THETA)
#         # elif self.arrow_temp[0] == 'left':
#         #     rclpy.logdebug(f'箭頭：左轉')
#         #     send.sendContinuousValue(2300, 0, 5 + ORIGIN_THETA)
#         # if  abs(self.yaw) > 85:#成功轉90度
#         #     send.sendSensorReset(0, 0, 1)
#         #     rclpy.logdebug(f'箭頭轉彎結束')
#         #     # self.yaw_temp = self.yaw
#         #     self.turn_now_flag = False
#         #     self.can_turn_flag = False

#     def imu_go(self):#直走
#         pass
#         # self.theta = 0 + ORIGIN_THETA
#         # rclpy.logdebug(f'直走')
#         # self.yaw = send.imu_value_Yaw
#         # rclpy.logdebug({self.yaw})
#         # self.speed_x = 2500
#         # if 0 < self.arrow_center.x <= 130:
#         #     self.theta = 5
#         #     send.sendContinuousValue(self.speed_x, 0, self.theta + ORIGIN_THETA)
#         # elif self.arrow_center.x >= 190:
#         #     self.theta = -5
#         #     send.sendContinuousValue(self.speed_x, 0, self.theta + ORIGIN_THETA)
#         # else:
#         #     if  self.yaw  > 5:
#         #         self.theta = -5 + ORIGIN_THETA
#         #         rclpy.logdebug(f'修正：右轉')
#         #     elif self.yaw  < -1:
#         #         self.theta = 5+ ORIGIN_THETA
#         #         rclpy.logdebug(f'修正：左轉')
#         # send.sendContinuousValue(self.speed_x, 0, self.theta)
    
#     def main(self):
#         if self.send.is_start:
#             # while True:
#             #     print(send.imu_value_Yaw)
#             # print(self.status)
#             if self.status == 'First':
#                 self.initial()
#                 time.sleep(1)
#                 self.send.sendBodyAuto(1)
#                 # self.status = 'line'  if self.send.DIOValue == 48 else 'Arrow_Part'
#                 self.status = 'line'
#                 # if self.status == 'Arrow_Part':
#                 #     self.send.sendHeadMotor(2, 1500, 50)

#             # elif self.status == 'line' and self.send.DIOValue == 48:   
#             elif self.status == 'line':            
#                 # if self.send.data_check == True:
#                 self.seek_line.update()
#                 self.theta_value()
#                 # arrow = self.arrow_yolo()
#                 # if arrow and self.line_status == 'arrow':
#                     # pass
#                     # self.status = 'First_arrow'
#                     # rclpy.logwarn(f'status = {self.status}')
#                 self.send.sendContinuousValue(self.speed_x , self.speed_y, self.theta)
#             # elif self.status == 'First_arrow':
#             #     if self.send.data_check == True:
#             #         self.seek_line.update()
#             #         self.line_to_arrow()
#             #     self.send.sendContinuousValue(self.speed_x , self.speed_y , self.theta)
#             # elif self.status == 'Arrow_Part':
#             #     if self.turn_now_flag:
#             #         self.arrow_turn()
#             #     else:
#             #         self.arrow_yolo()
#             #         if self.can_turn_flag:
#             #             rclpy.loginfo('can turn !!!')
#             #             if self.arrow_center.y >= 185:
#             #                 self.arrow_cnt_times += 1
#             #             if self.arrow_cnt_times >= 4:
#             #                 self.turn_now_flag = True
#             #                 self.arrow_cnt_times = 0
#             #         self.imu_go()
#         else:
#             if self.status != 'First':
#                 # self.initial()
#                 self.status = 'First'
#                 self.send.sendBodyAuto(0)

# class Seek_line:
#     def __init__(self):
#         self.send = Sendmessage()
#         self.upper_center = Coordinate(0, 0)
#         self.lower_center = Coordinate(0, 0)

#     def cvt_list2d2numpy(self, list2d):
#         max_len = max([len(sub_lst) for sub_lst in list2d])
#         np_array = np.vstack([np.pad(np.array(lst), (0, (max_len - len(lst)))) for lst in list2d])
#         return np_array

#     def update(self):
#         img_size = np.array(self.send.object_sizes)
#         img_xmin = np.array(self.send.object_x_min)
#         img_xmax = np.array(self.send.object_x_max)
#         img_ymin = np.array(self.send.object_y_min)
#         img_ymax = np.array(self.send.object_y_max)
#         # img_size = self.cvt_list2d2numpy(self.send.color_mask_subject_size)
#         # img_xmin = self.cvt_list2d2numpy(self.send.color_mask_subject_XMin)
#         # img_xmax = self.cvt_list2d2numpy(self.send.color_mask_subject_XMax)
#         # img_ymin = self.cvt_list2d2numpy(self.send.color_mask_subject_YMin)
#         # img_ymax = self.cvt_list2d2numpy(self.send.color_mask_subject_YMax)
#         # img_size = np.array(send.color_mask_subject_size)
#         # img_xmin = np.array(send.color_mask_subject_XMin)
#         # img_xmax = np.array(send.color_mask_subject_XMax)
#         # img_ymin = np.array(send.color_mask_subject_YMin)
#         # img_ymax = np.array(send.color_mask_subject_YMax)
#         filter_img_size = img_size > 380
#         has_object = filter_img_size.any()
#         # self.send.data_check = False
#         if not has_object:
#             # rclpy.logdebug(f'no object')
#             self.upper_center.x, self.upper_center.y = 0, 0
#             self.lower_center.x, self.lower_center.y = 0, 0
#             return
        
#         # print(img_ymin[filter_img_size])
#         img_xmin_new = int(img_xmin[filter_img_size].min())
#         img_xmax_new = int(img_xmax[filter_img_size].max())
#         img_ymin_new = int(img_ymin[filter_img_size].min())
#         img_ymax_new = int(img_ymax[filter_img_size].max())
#         # self.send.drawImageFunction(7, 1, img_xmin_new, img_xmax_new, img_ymin_new, img_ymax_new, 255, 0, 255)
#         #影像輸出為一維陣列，8bits
#         img_data = np.frombuffer(self.send.Label_Mask, dtype = np.uint8)
#         # img_data = img_data.reshape(240, 320)
#         img_data = img_data[img_ymin_new : img_ymax_new, img_xmin_new : img_xmax_new]
        
#         y_coord, x_coord = np.where(img_data != 0)

#         if len(x_coord) == 0:
#             self.upper_center.x, self.upper_center.y = 0, 0
#             self.lower_center.x, self.lower_center.y = 0, 0
#             return
        
#         middle_y = (np.max(y_coord) + np.min(y_coord)) // 2
#         upper_filter = y_coord <= middle_y
#         upper_x, upper_y = x_coord[upper_filter], y_coord[upper_filter]
#         self.upper_center.x = np.mean(upper_x) + img_xmin_new
#         self.upper_center.y = np.mean(upper_y) + img_ymin_new
#         # upper_xmin = upper_x.min() + img_xmin_new
#         # upper_xmax = upper_x.max() + img_xmin_new
#         # upper_ymin = upper_y.min() + img_ymin_new
#         # upper_ymax = upper_y.max() + img_ymin_new
#         # send.drawImageFunction(5, 1, upper_xmin, upper_xmax, upper_ymin, upper_ymax, 255, 0, 0)
#         lower_filter = y_coord > middle_y
#         lower_x, lower_y = x_coord[lower_filter], y_coord[lower_filter]
#         self.lower_center.x = np.mean(lower_x) + img_xmin_new
#         self.lower_center.y = np.mean(lower_y) + img_ymin_new
#         # lower_xmin = lower_x.min() + img_xmin_new
#         # lower_xmax = lower_x.max() + img_xmin_new
#         # lower_ymin = lower_y.min() + img_ymin_new
#         # lower_ymax = lower_y.max() + img_ymin_new
#         # send.drawImageFunction(6, 1, lower_xmin, lower_xmax, lower_ymin, lower_ymax, 0, 255, 0)
#         # self.send.drawImageFunction(2, 0, int(self.upper_center.x), int(self.lower_center.x), int(self.upper_center.y), int(self.lower_center.y), 0, 0, 0)

#     def calculate_slope(self):
#         delta = self.upper_center - self.lower_center
#         if delta.x == 0:
#             return float("inf")
#         return delta.y / delta.x
    
# def main(args=None):
#     rclpy.init(args=args)
#     mar = Mar()
#     # r = rclpy.create_rate(20)
#     # executor = rclpy.executors.SingleThreadedExecutor()
#     # executor.add_node(mar)
#     try:
#         while rclpy.ok():
#             rclpy.spin_once(mar)
#             mar.main()
#             print("speed", mar.speed_x)
#             print("theta", mar.theta)

#             time.sleep(0.05)
#     except KeyboardInterrupt:
#         mar.get_logger().info('KeyboardInterrupt, shutting down')
#     finally:
#         # 4) 清理
#         mar.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()


#!/usr/bin/env python3
# coding=utf-8

import rclpy
import time
import numpy as np
from wula.sp.API import Sendmessage

ORIGIN_THETA = 0
ORIGIN_SPEED = 2800

class Coordinate:
    def __init__(self, x, y):
        self.x, self.y = x, y
    def __add__(self, other):
        return Coordinate(self.x + other.x, self.y + other.y)
    def __sub__(self, other):
        return Coordinate(self.x - other.x, self.y - other.y)
    def __floordiv__(self, other):
        return Coordinate(self.x // other, self.y // other)

# class Seek_line:
#     def __init__(self, send):
#         self.send = send
#         self.upper_center = Coordinate(0, 0)
#         self.lower_center = Coordinate(0, 0)

#     def update(self):
#         img_size = np.array(self.send.object_sizes)
#         img_xmin = np.array(self.send.object_x_min)
#         img_xmax = np.array(self.send.object_x_max)
#         img_ymin = np.array(self.send.object_y_min)
#         img_ymax = np.array(self.send.object_y_max)
#         print(img_xmin)
#         print(img_xmax)

#         filter_img_size = img_size > 380
#         if not filter_img_size.any():
#             self.upper_center = Coordinate(0, 0)
#             self.lower_center = Coordinate(0, 0)
#             return

#         img_xmin_new = int(img_xmin[filter_img_size].min())
#         img_xmax_new = int(img_xmax[filter_img_size].max())
#         img_ymin_new = int(img_ymin[filter_img_size].min())
#         img_ymax_new = int(img_ymax[filter_img_size].max())
#         print(img_xmin_new)
#         print(img_xmax_new)

#         img_data = np.frombuffer(self.send.Label_Mask, dtype=np.uint8)
#         img_data = img_data.reshape((240, 320))
#         img_data = img_data[img_ymin_new:img_ymax_new, img_xmin_new:img_xmax_new]
#         y_coord, x_coord = np.where(img_data != 0)

#         if len(x_coord) == 0:
#             self.upper_center = Coordinate(0, 0)
#             self.lower_center = Coordinate(0, 0)
#             return

#         middle_y = (np.max(y_coord) + np.min(y_coord)) // 2
#         upper_filter = y_coord <= middle_y
#         lower_filter = y_coord > middle_y

#         upper_x = x_coord[upper_filter]
#         upper_y = y_coord[upper_filter]
#         lower_x = x_coord[lower_filter]
#         lower_y = y_coord[lower_filter]

#         self.upper_center = Coordinate(np.mean(upper_x) + img_xmin_new, np.mean(upper_y) + img_ymin_new)
#         self.lower_center = Coordinate(np.mean(lower_x) + img_xmin_new, np.mean(lower_y) + img_ymin_new)

#     def calculate_slope(self):
#         delta = self.upper_center - self.lower_center
#         if delta.x == 0:
#             return float('inf')
#         return delta.y / delta.x

def update(img_size, img_xmin, img_xmax, img_ymin, img_ymax, label_mask):
        # img_size = np.array(node.object_sizes)
        # img_xmin = np.array(send.object_x_min)
        # img_xmax = np.array(send.object_x_max)
        # img_ymin = np.array(send.object_y_min)
        # img_ymax = np.array(send.object_y_max)
        print(img_xmin)
        print(img_xmax)

        filter_img_size = img_size > 380
        if not filter_img_size.any():
            upper_center = Coordinate(0, 0)
            lower_center = Coordinate(0, 0)
            return

        img_xmin_new = int(img_xmin[filter_img_size].min())
        img_xmax_new = int(img_xmax[filter_img_size].max())
        img_ymin_new = int(img_ymin[filter_img_size].min())
        img_ymax_new = int(img_ymax[filter_img_size].max())
        print(img_xmin_new)
        print(img_xmax_new)

        img_data = np.frombuffer(label_mask, dtype=np.uint8)
        img_data = img_data.reshape((240, 320))
        img_data = img_data[img_ymin_new:img_ymax_new, img_xmin_new:img_xmax_new]
        y_coord, x_coord = np.where(img_data != 0)

        if len(x_coord) == 0:
            upper_center = Coordinate(0, 0)
            lower_center = Coordinate(0, 0)
            return

        middle_y = (np.max(y_coord) + np.min(y_coord)) // 2
        upper_filter = y_coord <= middle_y
        lower_filter = y_coord > middle_y

        upper_x = x_coord[upper_filter]
        upper_y = y_coord[upper_filter]
        lower_x = x_coord[lower_filter]
        lower_y = y_coord[lower_filter]

        upper_center = Coordinate(np.mean(upper_x) + img_xmin_new, np.mean(upper_y) + img_ymin_new)
        lower_center = Coordinate(np.mean(lower_x) + img_xmin_new, np.mean(lower_y) + img_ymin_new)
        delta = upper_center - lower_center
        if delta.x == 0:
            return float('inf')
        return delta.y / delta.x, upper_center, lower_center

def calculate_slope(self):
    delta = self.upper_center - self.lower_center
    if delta.x == 0:
        return float('inf')
    return delta.y / delta.x

def main(args=None):
    rclpy.init(args=args)
    node = Sendmessage()
    # seek_line = Seek_line(node)

    status = 'First'
    speed_x = 0
    speed_y = 0
    theta = 0

    try:
        while rclpy.ok():
            rclpy.spin_once(node)
            if node.is_start:
                if status == 'First':
                    node.reset(True)
                    # node.sendbodyAuto(1)
                    status = 'line'
                    time.sleep(1)

                elif status == 'line':
                    img_size = np.array(node.object_sizes)
                    img_xmin = np.array(node.object_x_min)
                    img_xmax = np.array(node.object_x_max)
                    img_ymin = np.array(node.object_y_min)
                    img_ymax = np.array(node.object_y_max)
                    label_mask = np.array(node.label_mask)
                    print(node.object_x_min)
                    slope, upper_center, lower_center = update(img_size, img_xmin, img_xmax, img_ymin, img_ymax, label_mask)
                    # slope = calculate_slope()
                    print("slope", slope)
                    middle_point = (upper_center + lower_center) // 2

                    if middle_point.y > 180:
                        if lower_center.x > 220:
                            theta = -5 + ORIGIN_THETA
                            speed_x = ORIGIN_SPEED
                        elif lower_center.x < 80:
                            theta = 6 + ORIGIN_THETA
                            speed_x = ORIGIN_SPEED
                        else:
                            status = 'arrow'
                    else:
                        if abs(slope) >= 15:
                            theta = ORIGIN_THETA
                            speed_x = ORIGIN_SPEED + 500
                        elif 7 <= abs(slope) < 15:
                            theta = 0
                            speed_x = ORIGIN_SPEED + 400
                        elif 4 <= abs(slope) < 7:
                            theta = 1 if slope < 0 else -1
                            speed_x = ORIGIN_SPEED + 300
                        elif 1.5 <= abs(slope) < 4:
                            theta = 3 if slope < 0 else -2
                            speed_x = ORIGIN_SPEED + 200
                        else:
                            theta = 4 if slope < 0 else -4
                            speed_x = ORIGIN_SPEED + 100

                        # if seek_line.lower_center.x < 130 and abs(slope) > 2:
                        #     theta = 5 + ORIGIN_THETA
                        #     speed_x = ORIGIN_SPEED
                        # elif seek_line.lower_center.x > 170 and abs(slope) > 2:
                        #     theta = -5 + ORIGIN_THETA
                        #     speed_x = ORIGIN_SPEED

                    node.sendContinuousValue(speed_x, speed_y, theta)
                    print(f"[LINE] speed = {speed_x}, theta = {theta}")

            else:
                if node.object_count >= 1:

                    print("size = ",node.object_sizes[0])
                if status != 'First':
                    status = 'First'
                    node.sendbodyAuto(0)
                    print("[RESET] Line following stopped")

            time.sleep(0.05)

    except KeyboardInterrupt:
        node.get_logger().info('KeyboardInterrupt, shutting down')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
