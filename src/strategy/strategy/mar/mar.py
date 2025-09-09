#!/usr/bin/env python
#coding=utf-8

import sys 
from strategy.API import API
import rclpy
from std_msgs.msg import String
from collections import Counter, deque
from rclpy.duration import Duration
import numpy as np
import time
import math
from rclpy.executors import MultiThreadedExecutor

ORIGIN_THETA = 0
ORIGIN_SPEED = 3500
ORIGIN_TRANSLATION = -1000

class Strategy(API):
    def __init__(self):
        super().__init__('mar')
        self.get_logger().info('Strategy node started')
        self.initial()
        self.speed_x = 0
        self.speed_y = 0
        self.theta = 0
        self.pre_speed_x = 0
        self.pre_speed_y =0
        self.pre_theta = 0
        # self.seek_line = Seek_line()
        self.arrow_center = Coordinate(0, 0)
        self.upper_center = Coordinate(0, 0)
        self.lower_center = Coordinate(0, 0)
        self.arrow_temp = deque(['None', 'None', 'None', 'None', 'None'], maxlen = 5)
        self.create_timer(0.05, self.run)
    
    def initial(self):
        self.status = 'First'
        self.can_turn_flag = False                                         
        self.arrow_flag = False
        self.turn_now_flag = False
        self.arrow_cnt_times = 0
        self.yaw_temp = 0                                  
        self.line_status = 'online'
        self.sendHeadMotor(2, 1200, 50)
        self.sendHeadMotor(1, 2048, 50)
        self.sendSensorReset(True)

    def cvt_list2d2numpy(self, list2d):
        max_len = max([len(sub_lst) for sub_lst in list2d])
        np_array = np.vstack([np.pad(np.array(lst), (0, (max_len - len(lst)))) for lst in list2d])
        return np_array

<<<<<<< HEAD
    def update(self):
        img_size = self.cvt_list2d2numpy(self.object_sizes)
        img_xmin = self.cvt_list2d2numpy(self.object_x_min)
        img_xmax = self.cvt_list2d2numpy(self.object_x_max)
        img_ymin = self.cvt_list2d2numpy(self.object_y_min)
        img_ymax = self.cvt_list2d2numpy(self.object_y_max)
        # self.get_logger().warn(f"object_sizes = {len(self.object_sizes[5])}")
        # self.get_logger().warn(f"object_x_min = {len(self.object_x_min[5])}")
        # self.get_logger().warn(f"object_x_max = {len(self.object_x_max[5])}")
        # self.get_logger().warn(f"object_y_min = {len(self.object_y_min[5])}")
        # self.get_logger().warn(f"object_y_max = {len(self.object_y_max[5])}")
        # img_size = np.array(send.color_mask_subject_size)
        # img_xmin = np.array(self.object_x_min)
        # img_xmax = np.array(self.object_x_max)
        # img_ymin = np.array(self.object_y_min)
        # img_ymax = np.array(self.object_y_max)
        filter_img_size = img_size > 1000
        # self.get_logger().warn(f"filter_img_size = {len(filter_img_size[5])}")
        has_object = filter_img_size.any()
        self.new_object_info = False
        if not has_object:
            self.get_logger().debug(f"no object")
            self.upper_center.x, self.upper_center.y = 0, 0
            self.lower_center.x, self.lower_center.y = 0, 0
            return
=======
    # def update(self):
    #     img_size = self.cvt_list2d2numpy(self.object_sizes)
    #     img_xmin = self.cvt_list2d2numpy(self.object_x_min)
    #     img_xmax = self.cvt_list2d2numpy(self.object_x_max)
    #     img_ymin = self.cvt_list2d2numpy(self.object_y_min)
    #     img_ymax = self.cvt_list2d2numpy(self.object_y_max)
    #     # self.get_logger().warn(f"object_sizes = {len(self.object_sizes[5])}")
    #     # self.get_logger().warn(f"object_x_min = {len(self.object_x_min[5])}")
    #     # self.get_logger().warn(f"object_x_max = {len(self.object_x_max[5])}")
    #     # self.get_logger().warn(f"object_y_min = {len(self.object_y_min[5])}")
    #     # self.get_logger().warn(f"object_y_max = {len(self.object_y_max[5])}")
    #     # img_size = np.array(send.color_mask_subject_size)
    #     # img_xmin = np.array(self.object_x_min)
    #     # img_xmax = np.array(self.object_x_max)
    #     # img_ymin = np.array(self.object_y_min)
    #     # img_ymax = np.array(self.object_y_max)
    #     filter_img_size = img_size > 500
    #     # self.get_logger().warn(f"filter_img_size = {len(filter_img_size[5])}")
    #     has_object = filter_img_size.any()
    #     self.new_object_info = False
    #     if not has_object:
    #         self.get_logger().debug(f"no object")
    #         self.upper_center.x, self.upper_center.y = 0, 0
    #         self.lower_center.x, self.lower_center.y = 0, 0
    #         return
>>>>>>> update
        
    #     # print(img_ymin[filter_img_size])
    #     img_xmin_new = int(img_xmin[filter_img_size].min())
    #     img_xmax_new = int(img_xmax[filter_img_size].max())
    #     img_ymin_new = int(img_ymin[filter_img_size].min())
    #     img_ymax_new = int(img_ymax[filter_img_size].max())
    #     self.drawImageFunction(7, 1, img_xmin_new, img_xmax_new, img_ymin_new, img_ymax_new, 255, 0, 255)
    #     #影像輸出為一維陣列，8bitslabel_matrix
    #     if self.color_counts:
    #         # img_data = np.frombuffer(self.label_matrix_flatten)
    #         # self.get_logger().info(f"label_matrix_flatten{img_data}")
    #         # img_data = img_data.reshape(240, 320)
    #         img_data = self.label_matrix[img_ymin_new : img_ymax_new, img_xmin_new : img_xmax_new]
        
    #     y_coord, x_coord = np.where(img_data != 0)

    #     if len(x_coord) == 0:
    #         self.upper_center.x, self.upper_center.y = 0, 0
    #         self.lower_center.x, self.lower_center.y = 0, 0
    #         return
        
    #     middle_y = (np.max(y_coord) + np.min(y_coord)) // 2
    #     upper_filter = y_coord <= middle_y
    #     upper_x, upper_y = x_coord[upper_filter], y_coord[upper_filter]
    #     self.upper_center.x = np.mean(upper_x) + img_xmin_new
    #     self.upper_center.y = np.mean(upper_y) + img_ymin_new
    #     # upper_xmin = upper_x.min() + img_xmin_new
    #     # upper_xmax = upper_x.max() + img_xmin_new
    #     # upper_ymin = upper_y.min() + img_ymin_new
    #     # upper_ymax = upper_y.max() + img_ymin_new
    #     # send.drawImageFunction(5, 1, upper_xmin, upper_xmax, upper_ymin, upper_ymax, 255, 0, 0)
    #     lower_filter = y_coord > middle_y
    #     lower_x, lower_y = x_coord[lower_filter], y_coord[lower_filter]
    #     self.lower_center.x = np.mean(lower_x) + img_xmin_new
    #     self.lower_center.y = np.mean(lower_y) + img_ymin_new
    #     # lower_xmin = lower_x.min() + img_xmin_new
    #     # lower_xmax = lower_x.max() + img_xmin_new
    #     # lower_ymin = lower_y.min() + img_ymin_new
    #     # lower_ymax = lower_y.max() + img_ymin_new
    #     # send.drawImageFunction(6, 1, lower_xmin, lower_xmax, lower_ymin, lower_ymax, 0, 255, 0)
    #     self.drawImageFunction(2, 0, int(self.upper_center.x), int(self.lower_center.x), int(self.upper_center.y), int(self.lower_center.y), 0, 0, 0)

    def update(self):
        # 0) 必要資料檢查
        if self.label_matrix is None:
            self.get_logger().warn("label_matrix 尚未準備好（尚未收到影像）")
            self.new_object_info = False
            return

        SIZE_TH = 500  # 面積門檻（你原本的 500）

        # 1) 逐 color/逐物件收集通過面積門檻的 bbox，避免 2D 布林索引
        xs_min, xs_max, ys_min, ys_max = [], [], [], []
        for c in range(len(self.object_sizes)):
            n = min(
                len(self.object_sizes[c]),
                len(self.object_x_min[c]),
                len(self.object_x_max[c]),
                len(self.object_y_min[c]),
                len(self.object_y_max[c]),
            )
            for j in range(n):
                try:
                    area = float(self.object_sizes[c][j])
                    if area <= SIZE_TH:
                        continue
                    xs_min.append(int(self.object_x_min[c][j]))
                    xs_max.append(int(self.object_x_max[c][j]))
                    ys_min.append(int(self.object_y_min[c][j]))
                    ys_max.append(int(self.object_y_max[c][j]))
                except Exception:
                    # 任一筆資料轉型失敗就跳過
                    continue

        # 這批資料消化完
        self.new_object_info = False

        # 2) 若沒有通過門檻的物件，重置中心並離開
        if not xs_min:
            self.get_logger().debug("no object after size filter")
            self.upper_center.x = self.upper_center.y = 0
            self.lower_center.x = self.lower_center.y = 0
            return

        # 3) 聚合 ROI 並夾邊界
        img_xmin_new = min(xs_min)
        img_xmax_new = max(xs_max)
        img_ymin_new = min(ys_min)
        img_ymax_new = max(ys_max)

        H, W = self.label_matrix.shape[:2]
        x1 = int(np.clip(img_xmin_new, 0, max(0, W - 1)))
        x2 = int(np.clip(img_xmax_new, 0, W))      # 右/下邊界可等於 W
        y1 = int(np.clip(img_ymin_new, 0, max(0, H - 1)))
        y2 = int(np.clip(img_ymax_new, 0, H))

        if x2 <= x1 or y2 <= y1:
            self.get_logger().warn(f"無效 ROI: ({x1},{y1})-({x2},{y2})")
            self.upper_center.x = self.upper_center.y = 0
            self.lower_center.x = self.lower_center.y = 0
            return

        self.drawImageFunction(7, 1, x1, x2, y1, y2, 255, 0, 255)

        # 4) 取 ROI 內非零像素並計算上下半部中心
        img_data = self.label_matrix[y1:y2, x1:x2]
        if img_data.size == 0:
            self.upper_center.x = self.upper_center.y = 0
            self.lower_center.x = self.lower_center.y = 0
            return

        y_coord, x_coord = np.where(img_data != 0)
        if len(x_coord) == 0:
            self.upper_center.x = self.upper_center.y = 0
            self.lower_center.x = self.lower_center.y = 0
            return

        middle_y = (int(np.max(y_coord)) + int(np.min(y_coord))) // 2
        upper_filter = y_coord <= middle_y
        lower_filter = y_coord >  middle_y

        upper_x, upper_y = x_coord[upper_filter], y_coord[upper_filter]
        lower_x, lower_y = x_coord[lower_filter], y_coord[lower_filter]

        # 5) 防呆：若某半區為空，退化為整體平均
        if len(upper_x) == 0 or len(lower_x) == 0:
            cx = float(np.mean(x_coord)) + x1
            cy = float(np.mean(y_coord)) + y1
            self.upper_center.x = self.lower_center.x = cx
            self.upper_center.y = self.lower_center.y = cy
        else:
            self.upper_center.x = float(np.mean(upper_x)) + x1
            self.upper_center.y = float(np.mean(upper_y)) + y1
            self.lower_center.x = float(np.mean(lower_x)) + x1
            self.lower_center.y = float(np.mean(lower_y)) + y1

        self.drawImageFunction(
            2, 0,
            int(self.upper_center.x), int(self.lower_center.x),
            int(self.upper_center.y), int(self.lower_center.y),
            0, 0, 0
        )

    def calculate_slope(self):
        delta = self.upper_center - self.lower_center
        if delta.x == 0:
            return float("inf")
        return delta.y / delta.x

    def theta_value(self):#判斷斜率
        slope = self.calculate_slope()
        middle_point = (self.upper_center + self.lower_center) // 2
        if middle_point.y > 180:
            if self.lower_center.x > 220:
                self.theta = -4 + ORIGIN_THETA
                self.speed_x = ORIGIN_SPEED
            elif self.lower_center.x < 80:
                self.theta = 4+ ORIGIN_THETA
                self.speed_x = ORIGIN_SPEED
            else:   
                self.line_status = 'arrow'#進入第二階段的指標，線在機器人螢幕的正下方
                self.get_logger().debug(f"line in image = {self.line_status}")
        else:           
            if abs(slope) >= 15:
                self.theta = ORIGIN_THETA
                self.speed_x = ORIGIN_SPEED + 500
            elif 7 <= abs(slope) < 15:
                self.theta = 0
                self.speed_x = ORIGIN_SPEED + 400
            elif 4 <= abs(slope) < 7:
                self.theta = 3 if slope > 0 else -3
                self.speed_x = ORIGIN_SPEED + 300
            elif 1.5 <= abs(slope) < 4:
                self.theta = 4 if slope > 0 else -4
                self.speed_x = ORIGIN_SPEED + 200
            else:
                self.theta = 5 if slope > 0 else -5
                self.speed_x = ORIGIN_SPEED + 100
            if middle_point.x == 0 and middle_point.y == 0:
                self.theta = ORIGIN_THETA
                self.speed_x = ORIGIN_SPEED
            elif self.lower_center.x < 130 and abs(slope) > 4:
                self.theta = 5 + ORIGIN_THETA
                self.speed_x = ORIGIN_SPEED
            elif self.lower_center.x > 180 and abs(slope) > 4:
                self.theta = -5 + ORIGIN_THETA
                self.speed_x = ORIGIN_SPEED
            self.line_status = 'online'
        self.get_logger().debug(f"speed = {self.speed_x}")
        self.get_logger().debug(f"theta = {self.theta}")

    def line_to_arrow(self):
        slope = self.calculate_slope()
        if abs(slope) > 15:
            self.theta = 0 + ORIGIN_THETA
            self.speed_x = 0
            self.arrow_cnt_times += 1
        elif 7 < abs(slope) < 15:
            self.theta = 1 if slope > 0 else -2 
        elif abs(slope) < 7:
            self.theta = 3 if slope > 0 else -4
            self.speed_x = 500
            self.speed_y = -500 if slope > 0 else -800
        if self.arrow_cnt_times >= 5:
            self.sendSensorReset(0, 0, 1)
            # self.yaw_temp = send.imu_value_Yaw
            self.arrow_cnt_times = 0
            self.speed_y = 0
            self.sendHeadMotor(2, 1400, 50)
            self.status = 'Arrow_Part'

    def arrow_yolo(self):
        self.arrow_center.x, self.arrow_center.y = 0, 0
        self.arrow_temp.append(self.yolo_Label)
        self.get_logger().debug(f"arrow list = {self.arrow_temp}")
        arrow_cnt_temp = len(set(self.arrow_temp))
        if arrow_cnt_temp == 1 and self.arrow_temp[0] != 'None':
            self.can_turn_flag = False
            if self.arrow_temp[0] == 'left' or self.arrow_temp[0] == 'right':
                self.get_logger().warn(f"!!!!!!! set can_tuen_flag")
                self.can_turn_flag = True
            self.arrow_center.y = self.yolo_Y
            self.arrow_center.x = self.yolo_X
            self.drawImageFunction(1, 1, self.yolo_XMin, self.yolo_XMax, self.yolo_YMin, self.yolo_YMax, 255, 0, 0)
            return True
        return False
    
    def arrow_turn(self):
        print("yaw = ", self.imu_rpy[2])
        # self.yaw_calculate()
        if self.arrow_temp[0] == 'right':
            self.get_logger().debug(f"箭頭：右轉")
            self.sendContinuousValue(3000, 0, -4 + ORIGIN_THETA)
        elif self.arrow_temp[0] == 'left':
            self.get_logger().debug(f"箭頭：左轉")
            self.sendContinuousValue(3000, 0, 5 + ORIGIN_THETA)
        if  abs(self.imu_rpy[2]) > 83:#成功轉90度
            self.sendSensorReset(0, 0, 1)
            self.get_logger().debug(f"箭頭轉彎結束")
            # self.yaw_temp = self.yaw
            self.turn_now_flag = False
            self.can_turn_flag = False

    def imu_go(self):#直走
        self.theta = 0 + ORIGIN_THETA
        self.get_logger().debug(f"直走")
        self.get_logger().debug(f"yaw = {self.imu_rpy[2]}")
        self.speed_x = 3000
        if 0 < self.arrow_center.x <= 140:
            self.theta = 5
            self.sendContinuousValue(self.speed_x, 0 , self.theta + ORIGIN_THETA)
        elif self.arrow_center.x >= 180:
            self.theta = -5
            self.sendContinuousValue(self.speed_x, 0 , self.theta + ORIGIN_THETA)
        else:
            if  self.imu_rpy[2]  > 8:
                self.theta = -3 + ORIGIN_THETA
                self.get_logger().debug(f"修正：右轉")
            elif self.imu_rpy[2]  < -8:
                self.theta = 3+ ORIGIN_THETA
                self.get_logger().debug(f"修正：左轉")
        self.sendContinuousValue(self.speed_x, 0 + ORIGIN_TRANSLATION, self.theta)
    
    def run(self):
        # try:
        #     while rclpy.ok():
        #         rclpy.spin_once(self, timeout_sec=0.1)
<<<<<<< HEAD
        if self.is_start:
=======
        if not self.is_start:
>>>>>>> update
            self.get_logger().info(f"status = {self.status}")
            if self.status == 'First':
                self.initial()
                # self.time_sleep(1.0)
                self.time_sleep(1.0)
                self.sendbodyAuto(1)
<<<<<<< HEAD
                self.status = 'line'  if self.dio == 0x02 else 'Arrow_Part'
=======
                self.status = 'line'  if self.dio == 0x00 else 'Arrow_Part'
>>>>>>> update
                if self.status == 'Arrow_Part':
                    self.sendHeadMotor(2, 1400, 50)
            elif self.status == 'line':            
                if self.new_object_info:
                    self.update()
                    self.theta_value()
                    # arrow = self.arrow_yolo()
                    # if arrow and self.line_status == 'arrow':
                    #     self.status = 'First_arrow'
                    #     self.get_logger().warn(f"status = {self.status}")
                self.get_logger().warn(f"slope = {self.calculate_slope()}")
            # elif self.status == 'First_arrow':
            #     if self.new_object_info == True:
            #         self.update()
            #         self.line_to_arrow()
            #     # self.sendContinuousValue(self.speed_x, self.speed_y, self.theta)
            # elif self.status == 'Arrow_Part':
            #     if self.turn_now_flag:
            #         self.arrow_turn()
            #     else:
            #         self.arrow_yolo()
            #         if self.can_turn_flag:
            #             self.get_logger().info(f"can turn !!!")
            #             if self.arrow_center.y >= 190:
            #                 self.arrow_cnt_times += 1
            #             if self.arrow_cnt_times >= 4:
            #                 self.turn_now_flag = True
            #                 self.arrow_cnt_times = 0
            #         self.imu_go()
            # self.get_logger().info(f"status = {self.status}")
            if self.pre_speed_x != self.speed_x or self.pre_theta != self.theta:
                self.sendContinuousValue(self.speed_x , 0, self.theta+1)
                self.pre_speed_x = self.speed_x
                self.pre_theta = self.theta
            self.get_logger().info(f"speed = {self.speed_x}")
            self.get_logger().info(f"theta = {self.theta}")
        else:
            # self.get_logger().info(f"status = {self.status}")
            if self.status != 'First':
                # self.initial()
                # self.status = 'First'
                self.sendbodyAuto(0)
            self.status = 'First'

        # except EnvironmentError:
        #     rclpy.shutdown()

class Coordinate:
    def __init__(self, x, y):
        self.x, self.y = x, y
    def __add__(self, other):
        return Coordinate((self.x + other.x), (self.y + other.y))
    def __sub__(self, other):
        return Coordinate((self.x - other.x), (self.y - other.y))
    def __floordiv__(self, other):
        return Coordinate((self.x // other), (self.y // other))

# class Seek_line:
#     def __init__(self):
#         self.upper_center = Coordinate(0, 0)
#         self.lower_center = Coordinate(0, 0)

#     def cvt_list2d2numpy(self, list2d):
#         max_len = max([len(sub_lst) for sub_lst in list2d])
#         np_array = np.vstack([np.pad(np.array(lst), (0, (max_len - len(lst)))) for lst in list2d])
#         return np_array

#     def update(self):
#         img_size = self.cvt_list2d2numpy(self.object_sizes)
#         img_xmin = self.cvt_list2d2numpy(self.object_x_min)
#         img_xmax = self.cvt_list2d2numpy(self.object_x_max)
#         img_ymin = self.cvt_list2d2numpy(self.object_y_min)
#         img_ymax = self.cvt_list2d2numpy(self.object_y_max)
#         # img_size = np.array(send.color_mask_subject_size)
#         # img_xmin = np.array(send.color_mask_subject_XMin)
#         # img_xmax = np.array(send.color_mask_subject_XMax)
#         # img_ymin = np.array(send.color_mask_subject_YMin)
#         # img_ymax = np.array(send.color_mask_subject_YMax)
#         filter_img_size = img_size > 380
#         has_object = filter_img_size.any()
#         # send.data_check = False
#         if not has_object:
#             self.get_logger().debug(f"no object")
#             self.upper_center.x, self.upper_center.y = 0, 0
#             self.lower_center.x, self.lower_center.y = 0, 0
#             return
        
#         # print(img_ymin[filter_img_size])
#         img_xmin_new = int(img_xmin[filter_img_size].min())
#         img_xmax_new = int(img_xmax[filter_img_size].max())
#         img_ymin_new = int(img_ymin[filter_img_size].min())
#         img_ymax_new = int(img_ymax[filter_img_size].max())
#         self.drawImageFunction(7, 1, img_xmin_new, img_xmax_new, img_ymin_new, img_ymax_new, 255, 0, 255)
#         #影像輸出為一維陣列，8bits
#         img_data = np.frombuffer(self.label_matrix, dtype = np.uint8)
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
#         self.drawImageFunction(2, 0, int(self.upper_center.x), int(self.lower_center.x), int(self.upper_center.y), int(self.lower_center.y), 0, 0, 0)

#     def calculate_slope(self):
#         delta = self.upper_center - self.lower_center
#         if delta.x == 0:
#             return float("inf")
#         return delta.y / delta.x

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
