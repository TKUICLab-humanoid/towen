# #!/usr/bin/env python3
# # coding=utf-8
# import rclpy
# import rclpy.logging
# from wula.sp.API import Sendmessage     # ← 确认这是你实际的 module 路径

# FORWARD_START_SPEED = 6000
# BACK_START_SPEED = 0
# FORWARD_MAX_SPEED = 6000
# FORWARD_TURN_SPEED = 5000
# FORWARD_MIN_SPEED = 3000
# BACK_TURN_SPEED = -4000
# BACK_MAX_SPEED = -5000

# FORWARD_SPEED_ADD = 5
# FORWARD_SPEED_SUB = -10
# BACK_SPEED_ADD = -5

# FORWARD_ORIGIN_THETA = 0
# BACK_ORIGIN_THETA = 0

# def main(args=None):
#     # 1) 先 init 全局 ROS 2 环境
#     rclpy.init(args=args)
#     first_in = True
#     # 2) 再建你的 Node
#     node = Sendmessage()
#     node.create_rate(100)
#     try:
#         # 3) 正确的 while loop
#         while rclpy.ok():
#             rclpy.spin_once(node)
#             if node.is_start:
#                 if first_in:
#                     print("aaaaaaaaaaaaaaaaaaaaaaaa")
#                     node.reset(True)
#                     walk_status = 'Forward'
#                     node.sendbodyAuto(1)
#                     first_in = False
#                     turn_flag = False
#                     speed = FORWARD_START_SPEED
#                     theta = 0
#                 yaw = node.yaw
#                 if node.object_count >0:
#                     print("cnt",node.object_count)
#                     size = node.object_sizes[0]
#                     print("size = ",size)
#                     print("walk_status = ",walk_status)
#                     if walk_status != 'Backward':
#                         if size > 9000:   #準備後退
#                             # pass
#                             walk_status = 'Backward'
#                         elif size >= 8000 :     #到球前減速
#                             # pass
#                             walk_status = 'Decelerating'
#                 else:
#                     print("not found fuck youuuuuuuuuuuuuuuu")
#                 if yaw >= 20 or yaw <= -5:
#                     turn_flag = True

#                 if walk_status == 'Forward':
#                     if turn_flag:
#                         if speed > 5000:
#                             speed = max(FORWARD_TURN_SPEED, speed + FORWARD_SPEED_SUB)
#                         else:
#                             if yaw >= 20:
#                                 theta = max(-1, theta-1)    #右轉
#                             elif yaw <= -5:
#                                 theta = min(1, theta+1)    #左轉
#                             else:
#                                 if theta < 0:
#                                     theta = max(0, theta+1)
#                                 else:
#                                     theta = min(0, theta-1)     #直走
#                                 turn_flag = False
#                     else:
#                         if theta < 0:
#                             theta = max(0, theta+1)
#                         elif theta > 0:
#                             theta = min(0, theta-1)     #直走
#                         else:
#                             theta = 0
#                         speed = min(FORWARD_MAX_SPEED, speed + FORWARD_SPEED_ADD)
#                 elif walk_status == 'Decelerating':
#                     if turn_flag:
#                         if speed > 4000:
#                             speed = max(FORWARD_MIN_SPEED, speed + FORWARD_SPEED_SUB)
#                         else:
#                             if yaw >= 20:
#                                 theta = max(-1, theta-1)    #右轉
#                             elif yaw <= 0:
#                                 theta = min(2, theta+1)    #左轉
#                             else:
#                                 if theta < 2:
#                                     theta = max(0, theta+1)
#                                 else:
#                                     theta = min(0, theta-1)     #直走
#                                 turn_flag = False
#                     else:
#                         if theta < 0:
#                             theta = max(0, theta+1)
#                         elif theta > 0:
#                             theta = min(0, theta-1)     #直走
#                         else:
#                             theta = 0
#                         speed = max(FORWARD_MIN_SPEED, speed + FORWARD_SPEED_SUB)         
#                 elif walk_status == 'Backward':
#                     if turn_flag:
#                         if speed > -4000:
#                             speed = max(BACK_TURN_SPEED, speed + FORWARD_SPEED_ADD)
#                         else:
#                             if yaw >= 20:
#                                 theta = max(0, theta-1)    #右轉
#                             elif yaw <= 0:
#                                 theta = min(2, theta+1)    #左轉
#                             else:
#                                 if theta < 0:
#                                     theta = max(1, theta+1)
#                                 else:
#                                     theta = min(1, theta-1)     #直走
#                                 turn_flag = False
#                     else:
#                         if theta < 1:
#                             theta = max(1, theta+1)
#                         elif theta > 1:
#                             theta = min(1, theta-1)     #直走
#                         else:
#                             theta = 1
#                         speed = max(BACK_MAX_SPEED, speed + BACK_SPEED_ADD)
#                 node.sendContinuousValue(speed,0,theta)   
#                 print("spedd = ", speed)
#                 print("theta = ", theta)

#             else:
#                 print("x_min = ",node.object_x_min)
#                 print("y_min = ",node.object_y_min)
#                 print("x_max = ",node.object_x_max)
#                 print("y_max = ",node.object_y_max)
#                 if not first_in:
#                     node.sendbodyAuto(0)
#                     # print("not start")
#                     walk_status = 'Forward'
#                     first_in = True
#                     turn_flag = False
#                     speed = 0
#                     theta = 0
            
#     except KeyboardInterrupt:
#         node.get_logger().info('KeyboardInterrupt, shutting down')
#     finally:
#         # 4) 清理
#         node.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()

import rclpy
import time
import numpy as np
from wula.sp.API import Sendmessage

ORIGIN_THETA = -1
ORIGIN_SPEED = 3500

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

def update(img_size=0, img_xmin=0, img_xmax=0, img_ymin=0, img_ymax=0, label_mask=0):
        # img_size = np.array(node.object_sizes)
        # img_xmin = np.array(send.object_x_min)
        # img_xmax = np.array(send.object_x_max)
        # img_ymin = np.array(send.object_y_min)
        # img_ymax = np.array(send.object_y_max)
        # print(img_xmin)
        # print(img_xmax)

        filter_img_size = img_size > 380
        if not filter_img_size.any():
            upper_center = Coordinate(0, 0)
            lower_center = Coordinate(0, 0)
            return

        img_xmin_new = int(img_xmin[filter_img_size].min())
        img_xmax_new = int(img_xmax[filter_img_size].max())
        img_ymin_new = int(img_ymin[filter_img_size].min())
        img_ymax_new = int(img_ymax[filter_img_size].max())
        # print(img_xmin_new)
        # print(img_xmax_new)

        img_data = np.frombuffer(label_mask, dtype=np.uint8)
        img_data = img_data.reshape((240, 320))
        img_data = img_data[img_ymin_new:img_ymax_new, img_xmin_new:img_xmax_new]
        y_coord, x_coord = np.where(img_data != 0)

        if len(x_coord) == 0:
            upper_center = Coordinate(0, 0)
            lower_center = Coordinate(0, 0)
            return 0, 0, 0

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
            return float('inf'), 0, 0
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
                    node.sendbodyAuto(1)
                    status = 'line'
                    time.sleep(1)

                elif status == 'line':
                    img_size = np.array(node.object_sizes)
                    img_xmin = np.array(node.object_x_min)
                    img_xmax = np.array(node.object_x_max)
                    img_ymin = np.array(node.object_y_min)
                    img_ymax = np.array(node.object_y_max)
                    label_mask = np.array(node.label_mask)
                    # if img_size == None or img_xmin == None or img_xmax == None or img_ymin == None or img_ymax == None or label_mask == None:
                    if node.object_count <=0 :
                        img_size = 0
                        img_xmin = 0
                        img_xmax = 0 
                        img_ymin = 0
                        img_ymax = 0
                        label_mask = 0
                        speed_x = 3000
                        speed_y = 0
                        theta = 0
                    else:

                        # print(node.object_x_min)
                        slope, upper_center, lower_center = update(img_size, img_xmin, img_xmax, img_ymin, img_ymax, label_mask)
                        # slope = calculate_slope()
                        print("slope", slope)
                        middle_point = (upper_center + lower_center) // 2

                        # if middle_point.y > 180:
                        #     if lower_center.x > 220:
                        #         theta = -4
                        #         speed_x = ORIGIN_SPEED
                        #     elif lower_center.x < 80:
                        #         theta = 6
                        #         speed_x = ORIGIN_SPEED
                        #     else:
                        #         status = 'arrow'
                        # else:
                        if abs(slope) >= 15:
                            theta = 2
                            speed_x = ORIGIN_SPEED + 500
                        elif 7 <= abs(slope) < 15:
                            theta = 3
                            speed_x = ORIGIN_SPEED + 400
                        elif 4 <= abs(slope) < 7:
                            theta = 4 if slope > 0 else -3
                            speed_x = ORIGIN_SPEED + 300
                        elif 1.5 <= abs(slope) < 4:
                            theta = 5 if slope > 0 else -4
                            speed_x = ORIGIN_SPEED + 200
                        else:
                            theta = 5 if slope > 0 else -5
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
                # if node.object_count >= 1:

                #     print("size = ",node.object_sizes[0])
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
