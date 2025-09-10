# from strategy.API import API 
# import rclpy
# from std_msgs.msg import String
# import numpy as np
# import time
# import math
# from rclpy.duration import Duration
# from rclpy.executors import MultiThreadedExecutor




# HORIZON_HEAD = 3048
# VERTICAL_HEAD = 1990
# HEAD_CHECK = 2040
# HAND_BACK = 23
# LEG_BACK = 21

# X_BENCHMARK = [220, 220, 219, 215, 218] #改大射左 #[最左,中左,中間,中右,最右]
# Y_BENCHMARK = 200 #改大射高
# SHOOT_DELAY = 1.45    #改大變快 2.05

# #motion sector
# PREPARE = 10   #預備動作
# SHOOT = 95       #射擊磁區
# HAND_BACK_SECTOR = 13 #手放回去
# HAND_UP = 22     #抬手
# LEG_DOWN = 20   #蹲腳


# #馬達
# HORIZON_HEAD_MOTOR = 1 #左右扭頭馬達
# VERTICAL_HEAD_MOTOR = 2 #上下扭頭馬達
# WAIST_MOTOR = 15 #腰的馬達

# #========================================================
# RIGHT_TURN = 2.4
# LEFT_TURN = 2.4
# #========================================================


# class Strategy(API):
#     def __init__(self):
#         super().__init__('ar')
#         self.get_logger().info('Strategy node started')
#         #######################################
#         self.red_x = 0
#         self.red_y = 0
#         self.biggest_blue_idx = 0
#         self.found = False
#         # self.archery_target = ArcheryTarge
#         #######################################
#         self.stand = 0
#         self.x_points = []
#         self.y_points = []
#         self.orbit_trail = []
#         self.first_point = False
#         self.ctrl_status = 'find_period'
#         self.datum_mark_x = 0
#         self.datum_mark_y = 0
#         self.lowest_x = 0
#         self.lowest_y = 0
#         self.turn_right = 0
#         self.turn_left = 0
#         self.hand_move_cnt = 0
#         self.start_time = 0
#         self.end_time = 0
#         self.init_cnt = 0
#         self.archery_action_ready = False
#         self.waist_delay = 0
#         self.circle_diameter = 0
#         self.timer = 0
#         self.back_flag = False
#         self.turn_left_cnt = 0
#         self.turn_right_cnt = 0
#         self.hand_back_cnt = 0
#         self.leg_back_cnt = 0
#         self.waist_delay = 0
#         self.x_benchmark_type = 0
#         self.create_timer(0.05, self.run)


    
#     #=================================================================
#     #初始化數值用
#     def initial(self):
#         self.x_points = []
#         self.y_points = []
#         self.orbit_trail = []
#         self.first_point = False
#         self.ctrl_status = 'find_period'
#         self.datum_mark_x = 0
#         self.datum_mark_y = 0
#         self.lowest_x = 0
#         self.lowest_y = 0
#         self.hand_move_cnt = 0
#         self.start_time = 0
#         self.end_time = 0
#         self.archery_action_ready = False
#         self.waist_delay = 0
#         self.timer = 0
#         self.back_flag = False
#         self.waist_delay = 0
#         self.x_benchmark_type = 0
#         self.turn = 0
#         self.strategy_object_sizes = []
#         self.strategy_object_x_min = []
#         self.strategy_object_x_max = []
#         self.strategy_object_y_min = []
#         self.strategy_object_y_max = []
#     #=================================================================）

#     def find(self):
#         self.found = False
#         if self.new_object_info:  
#         #     if self.color_counts[5] > 0:
#         #         self.biggest_red_idx = np.argmax(self.object_sizes[5])  # 最大值的 index
#         #         self.red_y = (self.object_y_min[5][self.biggest_red_idx] + self.object_y_max[5][self.biggest_red_idx]) // 2
#         #         self.red_x = (self.object_x_min[5][self.biggest_red_idx] + self.object_x_max[5][self.biggest_red_idx]) // 2
#         # else:
#         #     self.red_y = 0
#         #     self.red_x = 0
#         #         self.found = True

#         # if self.color_counts[5] > 0:
#         #     self.biggest_red_idx = np.argmax(self.object_sizes[5])  # 最大值的 index
#         #     if self.object_sizes[5][self.biggest_red_idx] > 50:
#         #         self.red_y = (self.object_y_min[5][self.biggest_red_idx] + self.object_y_max[5][self.biggest_red_idx]) // 2
#         #         self.red_x = (self.object_x_min[5][self.biggest_red_idx] + self.object_x_max[5][self.biggest_red_idx]) // 2
#         #         self.found = True
#         #         print(self.biggest_red_idx,self.red_x,self.red_y,self.object_sizes[5][self.biggest_red_idx])
#         #         return
            
#             #if self.get_object: #API計算，有看到東西 get_object = True
#             if self.color_counts[2] > 0:# 找出最大面積藍色區塊的 index
#                 self.biggest_blue_idx = np.argmax(self.object_sizes[2])  # 最大值的 index
#                 # self.get_logger().info(f"get biggest blue, number = {self.biggest_blue_idx}")
#                 # self.get_logger().info(f"get biggest blue, size = {self.object_sizes[2][self.biggest_blue_idx]}")

#                 self.bx = (self.object_x_min[2][self.biggest_blue_idx] + self.object_x_max[2][self.biggest_blue_idx]) // 2
#                 self.by = (self.object_y_min[2][self.biggest_blue_idx] + self.object_y_max[2][self.biggest_blue_idx]) // 2

#                 for k in range(self.color_counts[1]):  # 黃色
#                     self.yx = (self.object_x_min[1][k] + self.object_x_max[1][k]) // 2
#                     self.yy = (self.object_y_min[1][k] + self.object_y_max[1][k]) // 2
#                     # if -15 <= self.bx - self.yx <= 15 and -15 <= self.by - self.yy <= 15:
#                     #     print("sasasafjhfhfhrgj")
#                     #     self.red_x = self.yx
#                     #     self.red_y = self.yy
#                     #     self.found = True
#                     #     return
#                     for m in range(self.color_counts[5]):  # 紅色
#                         self.rx = (self.object_x_min[5][m] + self.object_x_max[5][m]) // 2
#                         self.ry = (self.object_y_min[5][m] + self.object_y_max[5][m]) // 2
#                         if -10 <= self.bx - self.yx <= 10 and -10 <= self.by - self.yy <= 10:#確定黃圈在藍圈裡面
#                             if -5 <= self.yx - self.rx <= 5 and -5 <= self.yy - self.ry <= 5:#確定紅圈在黃圈裡面
#                                 self.red_x = self.rx
#                                 self.red_y = self.ry
#                                 self.found = True
#                                 # self.get_logger().info(f"FOUND!!!!!!!!")
#                                 return
                
#             else:
#                 self.red_x, self.red_y = 0, 0
        
    
#     #=================================================================

#     def shoot(self):
#         self.get_logger().error(f"###### in SHOOT func #####")
#         if self.archery_action_ready:
            
#             time.sleep(self.end_time - self.start_time - SHOOT_DELAY)# + self.waist_delay)
#             self.get_logger().error(f"!!!!!! SHOOT !!!!!!!")
#             self.sendBodySector(SHOOT) #射擊動作 456
#             self.drawImageFunction(6, 1, self.lowest_x-1, self.lowest_x+1, self.lowest_y-1, self.lowest_y+1, 255, 0, 255) #十字線
#             time.sleep(2)
#             self.sendBodySector(HAND_BACK_SECTOR)    #手部退回
#             self.get_logger().info(f"RRRRRRRRRRR")
#             time.sleep(2)
#             #self.timer.shutdown()
#             #新東西
#             self.timer.cancel()
#             self.archery_action_ready = False
#             self.back_flag = True
#     #=================================================================）

# #     #這裡原本就註解掉
# #     # def find_lowest(self, last_x, last_y):
# #     #     self.lowest_x = (last_x + self.datum_mark_x)*0.5 
# #     #     self.lowest_y = (last_y + self.datum_mark_y)*0.5 + self.circle_diameter
# #     #     self.get_logger().info(f'< lowest_x = {self.lowest_x} , lowest_y = {self.lowest_y} >')


# #     #=================================================================

#     def api(self):
#         ###### color info ######
#         # 0:orange, 1:Yellow, 2:Blue, 3:Green, 4:Black, 5:Red, 6:White, 7:Other
#         self.color_counts[0]    # select color:0-7
#         self.object_sizes[0][0] # select color size
#         self.object_x_min[0][0] # select color Xmin
#         self.object_x_max[0][0] # select color Xmax
#         self.object_y_min[0][0] # select color Ymin
#         self.object_y_max[0][0] # select color Ymax
#         self.get_logger().info(f"Orange_cnt = {self.color_counts[0]}")

#         ##### IMU info ######
#         self.get_logger().info(f"ROLL = {self.roll}")   # IMU roll
#         self.get_logger().info(f"PITCH = {self.pitch}") # IMU pitch
#         self.get_logger().info(f"YAW = {self.yaw}")     # IMU yaw
#         self.reset(True)                                # reset IMU

#         ##### motion info #####
#         self.sendbodyAuto(1)                    # Generate Walking
#         self.sendBodySector(29)                 # Execute Sector
#         self.sendContinuousValue(1000,200,5)    # Change Walking (x, y, theta)

#         ##### DIO info #####
#         self.get_logger().info(f"strategy_status = {self.is_start}")    # Switch for Strategy 
#         self.get_logger().info(f"DIO_Total = {self.dio}")               # Switch for DIO (0x00-0x1C)

#     #=================================================================）

    
#     def run(self):
        
        
#         if self.is_start:
#             #=================================================================
#             #以下為撥策略會做的事
#             #瞄準動作====================================
#             if self.init_cnt == 1: #init_cnt初始為0，執行完預備動作切換為1
#                 self.initial() #初始化數值
#                 self.init_cnt = 0 #避免進來第二次
#                 self.sendHeadMotor(VERTICAL_HEAD_MOTOR, HEAD_CHECK, 80)
#                 time.sleep(0.05)
#                 self.sendHeadMotor(VERTICAL_HEAD_MOTOR, HEAD_CHECK, 80)
#                 time.sleep(0.05)
#                 self.sendHeadMotor(VERTICAL_HEAD_MOTOR, VERTICAL_HEAD, 80)
#                 time.sleep(0.05)
#                 self.sendHeadMotor(VERTICAL_HEAD_MOTOR, VERTICAL_HEAD, 80)
#                 time.sleep(2)
                          
#             self.find()#找把(濾波)


#             if self.ctrl_status == 'find_period': #初始status為find_period
#                 if self.found:#在self.archery_target.find()結束後被切為True，找到把之後才會進來
#                     self.x_points.append(self.red_x)#把red_x值丟到空矩陣x_points中
#                     self.y_points.append(self.red_y)#把red_y值丟到空矩陣y_points中

                    
#                     self.get_logger().warn(f"x: {self.red_x}")
#                     self.get_logger().warn(f'Y: {self.red_y}')
#                     if not self.first_point:#初始False
#                         if self.x_points[0] and self.y_points[0] != 0:#x_points & y_points矩陣的第一項不為0 #雙重保障，避免開策略第一瞬間沒看到把red_x & red_y = 0丟到矩陣裡
#                             time.sleep(0.2)
#                             self.start_time = time.time()
#                             self.get_logger().info(f'starttime = {self.start_time}')
#                             self.first_point = True
#                     self.found = False 

#                     if len(self.x_points) > 10:
#                         dis = ((self.red_x-self.x_points[0])**2 + (self.red_y-self.y_points[0])**2)**0.5 #算出第二個點跟第一個點的距離(畢氏定理)
#                         if dis <= 1.5: #距離<1.5
#                             self.end_time = time.time()
#                             self.lowest_y = max(self.y_points)#紅色最低點丟到lowest_y
#                             self.lowest_x = self.x_points[self.y_points.index(self.lowest_y)]#紅色最低點的y對應的x丟到lowest_x
#                             self.get_logger().info(f"endtime = {self.end_time}")
#                             self.get_logger().info(f"period = {self.end_time - self.start_time}")
#                             self.get_logger().info(f'low_y = :{self.lowest_y}')
#                             self.get_logger().info(f'low_x = :{self.lowest_x}')
#                             self.ctrl_status = 'archery_action'
#                     else:
#                         pass

#             elif self.ctrl_status == 'wait_lowest_point':
#                 if (self.red_x-self.lowest_x) < 2 and (self.red_y-self.lowest_y) < 10 :
#                     print("lalalal")
#                     #新東西
#                     self.timer = self.create_timer((self.end_time - self.start_time), self.shoot)
#                     self.drawImageFunction(6, 1, self.lowest_x-2, self.lowest_x+2, self.lowest_y-2, self.lowest_y+2, 0, 0, 255)
#                     self.get_logger().info("at lowest y")
#                     self.archery_action_ready = True             
#                     self.ctrl_status = 'wait_shoot'
                
            
#             #射箭動作==========================================
#             elif self.ctrl_status == 'archery_action': #轉腰+蹲
#                 # archery_action call sector
#                 #turn waist
#                 if 0 < self.lowest_x <= 90: #最右
#                     self.x_benchmark_type = 4#改大射左
#                     print("444444444444444444444")
#                 elif 90 < self.lowest_x <= 120: #中右  
#                     self.x_benchmark_type = 3
#                     print("333333333333333333333")
#                 elif self.lowest_x >= 180: #最左
#                     self.x_benchmark_type = 0
#                     print("00000000000000000000")
#                 elif 190 > self.lowest_x >= 155: #中左
#                     self.x_benchmark_type = 1
#                     print("1111111111111111111")
#                 else:
#                     self.x_benchmark_type = 2 #中間
#                     print("22222222222222222222")
#                 self.get_logger().info(f'X_BENCHMARK:{X_BENCHMARK[self.x_benchmark_type]}')
#                 if self.lowest_x - X_BENCHMARK[self.x_benchmark_type] > 0:#站在左邊
#                     self.turn_right = X_BENCHMARK[self.x_benchmark_type] - self.lowest_x
#                     self.sendSingleMotor(WAIST_MOTOR,int(RIGHT_TURN*self.turn_right),15)#轉腰
#                     time.sleep(0.5)
#                     self.sendHeadMotor(HORIZON_HEAD_MOTOR, int(3048-(RIGHT_TURN*self.turn_right)),15)
#                     time.sleep(0.5)
#                     right = RIGHT_TURN*self.turn_right
#                     self.get_logger().info('turn right')
#                     self.get_logger().info(f'turn angle:{self.turn_right}')
#                     self.get_logger().info(f'Motor_right:{right}')
#                     self.turn_right_cnt = 1 #1代表轉過腰
#                     # self.waist_delay = 0.3
#                     time.sleep(3)

#                 else:#站在右邊
#                     self.turn_left = X_BENCHMARK[self.x_benchmark_type] - self.lowest_x
#                     self.sendSingleMotor(WAIST_MOTOR,int(LEFT_TURN*self.turn_left),15)
#                     time.sleep(0.5)
#                     self.sendHeadMotor(HORIZON_HEAD_MOTOR, int(3048-(LEFT_TURN*self.turn_left)),15)
#                     time.sleep(0.5)
#                     left = LEFT_TURN*self.turn_left
#                     self.get_logger().info('turn left')
#                     self.get_logger().info(f'turn angle:{self.turn_left}')
#                     self.get_logger().info(f'Motor_left:{left}')
#                     self.turn_left_cnt = 1
#                     # self.waist_delay = 0.3
#                     time.sleep(3)
#                 #目標太低=>用腿蹲低
#                 if self.lowest_y - Y_BENCHMARK > 0:
#                     self.leg_move_cnt = abs(int((Y_BENCHMARK - self.lowest_y) / 2))#經驗談
#                     self.leg_back_cnt = self.leg_move_cnt
#                     self.get_logger().info('LEG_DOWN')
#                     self.get_logger().info(f'LEG_DOWN_cnt:{self.leg_move_cnt}')
#                     while self.leg_move_cnt != 0:
#                         self.sendBodySector(LEG_DOWN) #蘿菠蹲
#                         self.leg_move_cnt -= 1
#                         time.sleep(0.5)
                
#                 #目標太高=>手舉高
#                 else:
#                     self.hand_move_cnt = abs(int((self.lowest_y - Y_BENCHMARK) / 2))
#                     self.hand_back_cnt = self.hand_move_cnt
#                     self.get_logger().info('HAND_UP')
#                     self.get_logger().info(f'HAND_UP_cnt:{self.hand_move_cnt}')
#                     while self.hand_move_cnt != 0:
#                         self.sendBodySector(HAND_UP)
#                         self.get_logger().info(f'HAND_UP_cnt:{self.hand_move_cnt}')
#                         self.hand_move_cnt -= 1
#                         time.sleep(0.5)

#                 time.sleep(0.1)
#                 self.ctrl_status = 'wait_lowest_point'

#             elif self.ctrl_status == 'wait_shcoot':
#                 time.sleep(1)
#                 self.get_logger().info('wait shoot')

#             #=================================================================）



#         else:

#             self.get_logger().info(f"NOT starting")
#             #
#             # =================================================================
#             ###以下為歸位or nothing會做的事

#             if self.stand == 0: #stand初始為0
#                 self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
#                 time.sleep(0.5)
#                 self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
#                 time.sleep(0.5)
#                 #self.sendBodySector(PREPARE) #預備動作123
#                 #time.sleep(3.5)
#                 self.stand = 1 #stand變1，預備動作只會預備1次
#                 self.get_logger().info(f"預備動作執行完畢")
#                 self.get_logger().info(f"stop")

#             if self.back_flag: #shoot副函式執行完back_flag會變True #大指撥關掉後會進來，把動作復原
#                 print('in the back_flag')
#                 self.get_logger().info(f'self.turn_right_cnt:{self.turn_right_cnt}')
#                 self.get_logger().info(f'self.turn_left_cnt:{self.turn_left_cnt}')
#                 print(int(-(LEFT_TURN*self.turn_left)))
#                 print(int(-(RIGHT_TURN*self.turn_right)))
#                 if self.turn_right_cnt != 0:
#                     self.sendSingleMotor(WAIST_MOTOR,int(-(RIGHT_TURN*self.turn_right)),15)
#                     time.sleep(0.5)
#                     self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
#                     time.sleep(0.5)
#                     self.get_logger().info(f'waist_back')
#                     time.sleep(2)
#                 elif self.turn_left_cnt != 0:
#                     self.sendSingleMotor(WAIST_MOTOR,int(-(LEFT_TURN*self.turn_left)),15)
#                     time.sleep(0.5)
#                     self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
#                     time.sleep(0.5)
#                     self.get_logger().info(f'waist_back')
#                     time.sleep(2)
#                 for i in range(0, self.hand_back_cnt):
#                     self.sendBodySector(HAND_BACK)
#                     self.get_logger().info(f'HAND_back_cnt:{self.hand_back_cnt}')
#                     self.hand_back_cnt -= 1
#                     time.sleep(0.5)
#                 for i in range(0, self.leg_back_cnt):
#                     self.sendBodySector(LEG_BACK)
#                     self.get_logger().info(f'LEG_back_cnt:{self.leg_back_cnt}')
#                     self.leg_back_cnt -= 1
#                     time.sleep(0.5)
#                 self.back_flag = False
#             self.init_cnt = 1
#             time.sleep(1)
            

#             #================================================================)

# def main(args=None):
#     rclpy.init(args=args)
#     node = Strategy()
#     executor = MultiThreadedExecutor()
#     executor.add_node(node)
#     try:
#         executor.spin()
#     finally:
#         node.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()
    

# # class Strategy(API):
# #     def __init__(self):
# #         super().__init__('ar')
# #         self.get_logger().info('Strategy node started')
# #         self.create_timer(0.05, self.run)
# #         self.fin = False


# #     def run(self):
# #         if self.is_start:
# #             if self.color_counts[5] > 0:
# #                 self.biggest_red_idx = np.argmax(self.object_sizes[5])  # 最大值的 index
# #                 self.redy = (self.object_y_min[5][self.biggest_red_idx] + self.object_y_max[5][self.biggest_red_idx]) // 2
# #                 self.redx = (self.object_x_min[5][self.biggest_red_idx] + self.object_x_max[5][self.biggest_red_idx]) // 2
# #                 print(self.biggest_red_idx,self.redx,self.redy,self.object_sizes[5][self.biggest_red_idx])
                
# #             if self.fin ==False:
# #                 self.sendBodySector(90) #射擊動作 456
# #                 self.fin = True

# #         else:
# #             print("aaaaa")
# #             self.time_sleep(1)


# # def main(args=None):
# #     rclpy.init(args=args)
# #     node = Strategy()
# #     executor = MultiThreadedExecutor()
# #     executor.add_node(node)
# #     try:
# #         executor.spin()
# #     finally:
# #         node.destroy_node()
# #         rclpy.shutdown()

# # # if __name__ == '__main__':
# # #     main()

# #!/usr/bin/env python3
# # coding=utf-8
# # from strategy.API import API   # ← 這個要是我之前給你的新版 API
# # import rclpy
# # from std_msgs.msg import String
# # import numpy as np
# # import time
# # import math
# # from rclpy.duration import Duration
# # from rclpy.executors import MultiThreadedExecutor

# # # ====== 你的原常數 ======
# # HORIZON_HEAD = 3048
# # VERTICAL_HEAD = 1990
# # HEAD_CHECK = 2040
# # HAND_BACK = 23
# # LEG_BACK = 21

# # X_BENCHMARK = [210, 210, 210, 210, 210]  # 改大射左
# # Y_BENCHMARK = 180                        # 改大射高
# # SHOOT_DELAY = 0                          # 改大變快 2.05

# # # motion sector
# # PREPARE = 10               # 預備動作
# # SHOOT = 95                 # 射擊磁區
# # HAND_BACK_SECTOR = 13      # 手放回去
# # HAND_UP = 22               # 抬手
# # LEG_DOWN = 20              # 蹲腳

# # # 馬達
# # HORIZON_HEAD_MOTOR = 1     # 左右扭頭馬達
# # VERTICAL_HEAD_MOTOR = 2    # 上下扭頭馬達
# # WAIST_MOTOR = 15           # 腰的馬達

# # # 轉腰系數
# # RIGHT_TURN = 2.4
# # LEFT_TURN  = 2.4


# # class Strategy(API):
# #     def __init__(self):
# #         # 用好辨識的節點名；同時載入 API 的 per-color detections 能力
# #         super().__init__(node_name='strategy')
# #         self.get_logger().info('Strategy node started')

# #         # ====== 狀態變數 ======
# #         self.red_x = 0
# #         self.red_y = 0
# #         self.biggest_blue_idx = 0
# #         self.found = False

# #         self.stand = 0
# #         self.x_points = []
# #         self.y_points = []
# #         self.orbit_trail = []
# #         self.first_point = False
# #         self.ctrl_status = 'find_period'
# #         self.datum_mark_x = 0
# #         self.datum_mark_y = 0
# #         self.lowest_x = 0
# #         self.lowest_y = 0
# #         self.turn_right = 0
# #         self.turn_left = 0
# #         self.hand_move_cnt = 0
# #         self.start_time = 0
# #         self.end_time = 0
# #         self.init_cnt = 0
# #         self.archery_action_ready = False
# #         self.waist_delay = 0
# #         self.circle_diameter = 0
# #         self.timer = None
# #         self.back_flag = False
# #         self.turn_left_cnt = 0
# #         self.turn_right_cnt = 0
# #         self.hand_back_cnt = 0
# #         self.leg_back_cnt = 0
# #         self.x_benchmark_type = 0

# #         # 為了避免同一幀重複處理
# #         self.last_processed_stamp = {'red': (0, 0)}

# #         # 50ms 主循環；放在 image_cbg 讓它與影像/偵測同群組
# #         self.create_timer(0.05, self.run, callback_group=self.image_cbg)

# #     #=================================================================
# #     # 初始化數值用
# #     def initial(self):
# #         self.x_points = []
# #         self.y_points = []
# #         self.orbit_trail = []
# #         self.first_point = False
# #         self.ctrl_status = 'find_period'
# #         self.datum_mark_x = 0
# #         self.datum_mark_y = 0
# #         self.lowest_x = 0
# #         self.lowest_y = 0
# #         self.hand_move_cnt = 0
# #         self.start_time = 0
# #         self.end_time = 0
# #         self.archery_action_ready = False
# #         self.waist_delay = 0
# #         self.timer = None
# #         self.back_flag = False
# #         self.x_benchmark_type = 0
# #         self.turn = 0
# #         self.strategy_object_sizes = []
# #         self.strategy_object_x_min = []
# #         self.strategy_object_x_max = []
# #         self.strategy_object_y_min = []
# #         self.strategy_object_y_max = []

# #     #=================================================================
# #     # 用即時偵測更新 red_x/red_y 與 found
# #     def find(self):
# #         # 只在有新資料的那一輪處理。new_object_info 由 API 的 per-color callback 設定
# #         if not self.new_object_info:
# #             # 沒新資料，不更新座標
# #             return

# #         # 有新資料：用統計欄位（API 幫你維護）找紅色最大面積
# #         if self.color_counts[5] > 0:
# #             biggest_red_idx = int(np.argmax(self.object_sizes[5]))
# #             self.red_y = (self.object_y_min[5][biggest_red_idx] + self.object_y_max[5][biggest_red_idx]) // 2
# #             self.red_x = (self.object_x_min[5][biggest_red_idx] + self.object_x_max[5][biggest_red_idx]) // 2
# #             self.found = True
# #         else:
# #             self.red_x = 0
# #             self.red_y = 0
# #             self.found = False

# #         # 這輪的新資料處理完了，清旗標
# #         self.new_object_info = False

# #     #=================================================================
# #     def shoot(self):
# #         self.get_logger().error("###### in SHOOT func #####")
# #         if self.archery_action_ready:
# #             # 依週期延遲後射擊
# #             time.sleep(max(0.0, self.end_time - self.start_time - SHOOT_DELAY))
# #             self.get_logger().error("!!!!!! SHOOT !!!!!!!")
# #             self.sendBodySector(SHOOT)  # 射擊
# #             self.drawImageFunction(6, 1, self.lowest_x-1, self.lowest_x+1, self.lowest_y-1, self.lowest_y+1, 255, 0, 255)
# #             time.sleep(2)
# #             self.sendBodySector(HAND_BACK_SECTOR)    # 手部退回
# #             self.get_logger().info("RRRRRRRRRRR")
# #             time.sleep(2)

# #             # 取消一次性 timer
# #             if self.timer is not None:
# #                 try:
# #                     self.timer.cancel()
# #                 except Exception:
# #                     pass
# #                 self.timer = None

# #             self.archery_action_ready = False
# #             self.back_flag = True

# #     #=================================================================
# #     def api(self):
# #         # 示例：如何從 API 拿到資訊
# #         # 0:orange, 1:Yellow, 2:Blue, 3:Green, 4:Black, 5:Red, 6:White, 7:Other
# #         self.get_logger().info(f"Orange_cnt = {self.color_counts[0]}")
# #         self.get_logger().info(f"ROLL={self.roll} PITCH={self.pitch} YAW={self.yaw}")

# #         # 操作示例
# #         # self.sendbodyAuto(1)
# #         # self.sendBodySector(29)
# #         # self.sendContinuousValue(1000, 200, 5)

# #         self.get_logger().info(f"strategy_status = {self.is_start}")
# #         self.get_logger().info(f"DIO_Total = {self.dio}")

# #     #=================================================================
# #     def run(self):
# #         # 未啟動就先做待機與歸位
# #         if not self.is_start:
# #             self.get_logger().info("NOT starting")
# #             if self.stand == 0:
# #                 self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
# #                 time.sleep(0.5)
# #                 self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
# #                 time.sleep(0.5)
# #                 # self.sendBodySector(PREPARE)
# #                 # time.sleep(3.5)
# #                 self.stand = 1
# #                 self.get_logger().info("預備動作執行完畢")
# #                 self.get_logger().info("stop")

# #             # 若剛射完，做復位
# #             if self.back_flag:
# #                 self.get_logger().info('in the back_flag')
# #                 self.get_logger().info(f'self.turn_right_cnt:{self.turn_right_cnt}')
# #                 self.get_logger().info(f'self.turn_left_cnt:{self.turn_left_cnt}')
# #                 if self.turn_right_cnt != 0:
# #                     self.sendSingleMotor(WAIST_MOTOR, int(-(RIGHT_TURN * self.turn_right)), 15)
# #                     time.sleep(0.5)
# #                     self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
# #                     time.sleep(0.5)
# #                     self.get_logger().info('waist_back')
# #                     time.sleep(2)
# #                 elif self.turn_left_cnt != 0:
# #                     self.sendSingleMotor(WAIST_MOTOR, int(-(LEFT_TURN * self.turn_left)), 15)
# #                     time.sleep(0.5)
# #                     self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
# #                     time.sleep(0.5)
# #                     self.get_logger().info('waist_back')
# #                     time.sleep(2)

# #                 for _ in range(0, self.hand_back_cnt):
# #                     self.sendBodySector(HAND_BACK)
# #                     self.get_logger().info(f'HAND_back_cnt:{self.hand_back_cnt}')
# #                     self.hand_back_cnt -= 1
# #                     time.sleep(0.5)

# #                 for _ in range(0, self.leg_back_cnt):
# #                     self.sendBodySector(LEG_BACK)
# #                     self.get_logger().info(f'LEG_back_cnt:{self.leg_back_cnt}')
# #                     self.leg_back_cnt -= 1
# #                     time.sleep(0.5)

# #                 self.back_flag = False

# #             self.init_cnt = 1
# #             time.sleep(1)
# #             return

# #         # ===== 啟動後策略 =====
# #         # 初始化一次頭部姿態
# #         if self.init_cnt == 1:
# #             self.initial()
# #             self.init_cnt = 0
# #             self.sendHeadMotor(VERTICAL_HEAD_MOTOR, HEAD_CHECK, 80)
# #             time.sleep(0.05)
# #             self.sendHeadMotor(VERTICAL_HEAD_MOTOR, HEAD_CHECK, 80)
# #             time.sleep(0.05)
# #             self.sendHeadMotor(VERTICAL_HEAD_MOTOR, VERTICAL_HEAD, 80)
# #             time.sleep(0.05)
# #             self.sendHeadMotor(VERTICAL_HEAD_MOTOR, VERTICAL_HEAD, 80)
# #             time.sleep(4)

# #         # 取最新偵測
# #         self.find()
# #         if self.ctrl_status == 'find_period':
# #             if self.found:
# #                 self.x_points.append(self.red_x)
# #                 self.y_points.append(self.red_y)

# #                 self.get_logger().warn(f"x: {self.red_x}")
# #                 self.get_logger().warn(f"Y: {self.red_y}")

# #                 if not self.first_point:
# #                     if len(self.x_points) > 0 and len(self.y_points) > 0 and self.x_points[0] != 0 and self.y_points[0] != 0:
# #                         time.sleep(0.2)
# #                         self.start_time = time.time()
# #                         self.get_logger().info(f'starttime = {self.start_time}')
# #                         self.first_point = True

# #                 # 本輪處理完，found 清掉，避免重複加入點
# #                 self.found = False

# #                 if len(self.x_points) > 10:
# #                     dis = ((self.red_x - self.x_points[0]) ** 2 + (self.red_y - self.y_points[0]) ** 2) ** 0.5
# #                     if dis <= 1.5:
# #                         self.end_time = time.time()
# #                         self.lowest_y = max(self.y_points)
# #                         self.lowest_x = self.x_points[self.y_points.index(self.lowest_y)]
# #                         self.get_logger().info(f"endtime = {self.end_time}")
# #                         self.get_logger().info(f"period = {self.end_time - self.start_time}")
# #                         self.get_logger().info(f'low_y = :{self.lowest_y}')
# #                         self.get_logger().info(f'low_x = :{self.lowest_x}')
# #                         self.ctrl_status = 'archery_action'

# #         elif self.ctrl_status == 'wait_lowest_point':
# #             if abs(self.red_x - self.lowest_x) < 2 and abs(self.red_y - self.lowest_y) < 10:
# #                 # 到最低點附近，排射擊 timer
# #                 period = max(0.0, self.end_time - self.start_time)
# #                 self.timer = self.create_timer(period, self.shoot)
# #                 self.drawImageFunction(6, 1, self.lowest_x-2, self.lowest_x+2, self.lowest_y-2, self.lowest_y+2, 0, 0, 255)
# #                 self.get_logger().info("at lowest y")
# #                 self.archery_action_ready = True
# #                 self.ctrl_status = 'wait_shoot'

# #         elif self.ctrl_status == 'archery_action':
# #             # 決定 X_BENCHMARK 類型
# #             x = self.lowest_x
# #             if 0 < x <= 90:              self.x_benchmark_type = 4
# #             elif 90 < x <= 120:          self.x_benchmark_type = 3
# #             elif x >= 180:               self.x_benchmark_type = 0
# #             elif 155 <= x < 190:         self.x_benchmark_type = 1
# #             else:                        self.x_benchmark_type = 2
# #             self.get_logger().info(f'X_BENCHMARK:{X_BENCHMARK[self.x_benchmark_type]}')

# #             # 轉腰 + 對頭
# #             if self.lowest_x - X_BENCHMARK[self.x_benchmark_type] > 0:
# #                 self.turn_right = X_BENCHMARK[self.x_benchmark_type] - self.lowest_x
# #                 self.sendSingleMotor(WAIST_MOTOR, int(RIGHT_TURN * self.turn_right), 15)
# #                 time.sleep(0.5)
# #                 self.sendHeadMotor(HORIZON_HEAD_MOTOR, int(3048 - (RIGHT_TURN * self.turn_right)), 15)
# #                 time.sleep(0.5)
# #                 self.get_logger().info('turn right')
# #                 self.get_logger().info(f'turn angle:{self.turn_right}')
# #                 self.get_logger().info(f'Motor_right:{RIGHT_TURN * self.turn_right}')
# #                 self.turn_right_cnt = 1
# #                 time.sleep(3)
# #             else:
# #                 self.turn_left = X_BENCHMARK[self.x_benchmark_type] - self.lowest_x
# #                 self.sendSingleMotor(WAIST_MOTOR, int(LEFT_TURN * self.turn_left), 15)
# #                 time.sleep(0.5)
# #                 self.sendHeadMotor(HORIZON_HEAD_MOTOR, int(3048 - (LEFT_TURN * self.turn_left)), 15)
# #                 time.sleep(0.5)
# #                 self.get_logger().info('turn left')
# #                 self.get_logger().info(f'turn angle:{self.turn_left}')
# #                 self.get_logger().info(f'Motor_left:{LEFT_TURN * self.turn_left}')
# #                 self.turn_left_cnt = 1
# #                 time.sleep(3)

# #             # 高低調整：腿蹲或手抬
# #             if self.lowest_y - Y_BENCHMARK > 0:
# #                 self.leg_move_cnt = abs(int((Y_BENCHMARK - self.lowest_y) / 2))
# #                 self.leg_back_cnt = self.leg_move_cnt
# #                 self.get_logger().info('LEG_DOWN')
# #                 self.get_logger().info(f'LEG_DOWN_cnt:{self.leg_move_cnt}')
# #                 while self.leg_move_cnt != 0:
# #                     self.sendBodySector(LEG_DOWN)
# #                     self.leg_move_cnt -= 1
# #                     time.sleep(1)
# #             else:
# #                 self.hand_move_cnt = abs(int((self.lowest_y - Y_BENCHMARK) / 2))
# #                 self.hand_back_cnt = self.hand_move_cnt
# #                 self.get_logger().info('HAND_UP')
# #                 self.get_logger().info(f'HAND_UP_cnt:{self.hand_move_cnt}')
# #                 while self.hand_move_cnt != 0:
# #                     self.sendBodySector(HAND_UP)
# #                     self.get_logger().info(f'HAND_UP_cnt:{self.hand_move_cnt}')
# #                     self.hand_move_cnt -= 1
# #                     time.sleep(1)

# #             time.sleep(0.1)
# #             self.get_logger().info(f'ctrl_status:{self.ctrl_status}')
# #             self.ctrl_status = 'wait_lowest_point'

# #         elif self.ctrl_status == 'wait_shoot':
# #             # 等待 shoot() timer 觸發
# #             self.get_logger().info("wait_shoot")

# # def main(args=None):
# #     rclpy.init(args=args)
# #     node = Strategy()

# #     # 用多執行緒 executor 讓影像/IMU 回呼不互卡
# #     executor = MultiThreadedExecutor(num_threads=2)
# #     executor.add_node(node)
# #     try:
# #         executor.spin()
# #     finally:
# #         node.destroy_node()
# #         rclpy.shutdown()

# # if __name__ == '__main__':
# #     main()

#!/usr/bin/env python3
# coding=utf-8
from strategy.API import API
import rclpy
import numpy as np
import time
from rclpy.executors import MultiThreadedExecutor

# ================== 常數 ==================
HORIZON_HEAD = 3048
VERTICAL_HEAD = 1990
HEAD_CHECK = 2040
HAND_BACK = 23
LEG_BACK = 21
AA = 3
# [最左, 中左, 中間, 中右, 最右]
X_BENCHMARK = [220+AA, 220+AA, 210+AA, 215+AA, 218+AA]  # 改大射左
Y_BENCHMARK = 160                        # 改大射高
SHOOT_DELAY = 2.7                     # 改大變快 (秒)

# motion sector
PREPARE = 10
SHOOT = 905
HAND_BACK_SECTOR = 133
HAND_UP = 22
LEG_DOWN = 20

# 馬達
HORIZON_HEAD_MOTOR = 1
VERTICAL_HEAD_MOTOR = 2
WAIST_MOTOR = 15

# 轉腰系數
RIGHT_TURN = 2.4
LEFT_TURN  = 2.4


class Strategy(API):
    def __init__(self):
        # 節點名可自訂；不影響影像節點 location 參數
        super().__init__('archery_strategy')
        self.get_logger().info('Strategy node started')

        # ===== 狀態 =====
        self.red_x = 0
        self.red_y = 0
        self.biggest_blue_idx = 0
        self.found = False

        self.stand = 0
        self.x_points = []
        self.y_points = []
        self.orbit_trail = []
        self.first_point = False
        self.ctrl_status = 'find_period'
        self.datum_mark_x = 0
        self.datum_mark_y = 0
        self.lowest_x = 0
        self.lowest_y = 0
        self.turn_right = 0
        self.turn_left = 0
        self.hand_move_cnt = 0

        # 以偵測 stamp 量週期（ns）
        self.start_ns = None
        self.end_ns = None
        self.cur_det_ns = None

        self.init_cnt = 0
        self.archery_action_ready = False
        self.circle_diameter = 0
        self.timer = None            # one-shot timer for shoot()
        self.back_flag = False
        self.turn_left_cnt = 0
        self.turn_right_cnt = 0
        self.hand_back_cnt = 0
        self.leg_back_cnt = 0
        self.x_benchmark_type = 0
        self.create_timer(0.05, self.run)


        # 主迴圈
        self.create_timer(0.05, self.run)

    # ========= 小工具 =========
    @staticmethod
    def _ns(st):
        # st: (sec, nsec)
        if st is None:
            return None
        return int(st[0]) * 1_000_000_000 + int(st[1])

    def _stamp_ns_for_colors(self, colors=('red', 'yellow', 'blue')):
        # 取幾個顏色偵測 stamp 的最大值（通常同幀）
        ns_list = []
        for c in colors:
            st = self.latest_stamps.get(c, (0, 0))
            ns = self._ns(st)
            if ns and ns > 0:
                ns_list.append(ns)
        if not ns_list:
            return None
        return max(ns_list)

    #=================================================================
    # 初始化
    def initial(self):
        self.x_points = []
        self.y_points = []
        self.orbit_trail = []
        self.first_point = False
        self.ctrl_status = 'find_period'
        self.datum_mark_x = 0
        self.datum_mark_y = 0
        self.lowest_x = 0
        self.lowest_y = 0
        self.hand_move_cnt = 0
        self.start_ns = None
        self.end_ns = None
        self.archery_action_ready = False
        self.timer = None
        self.back_flag = False
        self.x_benchmark_type = 0
        self.turn = 0
        self.turn_left_cnt = 0
        self.turn_right_cnt = 0
        self.hand_back_cnt = 0
        self.leg_back_cnt = 0

    #=================================================================
    # 以藍-黃-紅同心判定目標中心（red_x, red_y）
    def find(self):
        self.found = False
        if not self.new_object_info:
            return

        # 最新偵測的 stamp（ns）
        self.cur_det_ns = self._stamp_ns_for_colors(('red', 'yellow', 'blue'))

        # 有最大的藍圈才檢查內圈
        if self.color_counts[2] > 0:  # blue
            self.biggest_blue_idx = int(np.argmax(self.object_sizes[2]))
            bx = (self.object_x_min[2][self.biggest_blue_idx] + self.object_x_max[2][self.biggest_blue_idx]) // 2
            by = (self.object_y_min[2][self.biggest_blue_idx] + self.object_y_max[2][self.biggest_blue_idx]) // 2

            # 黃在藍內，再檢紅在黃內
            for k in range(self.color_counts[1]):  # yellow
                yx = (self.object_x_min[1][k] + self.object_x_max[1][k]) // 2
                yy = (self.object_y_min[1][k] + self.object_y_max[1][k]) // 2

                # 黃在藍內（寬鬆閾值）
                if abs(bx - yx) <= 10 and abs(by - yy) <= 10:
                    for m in range(self.color_counts[5]):  # red
                        rx = (self.object_x_min[5][m] + self.object_x_max[5][m]) // 2
                        ry = (self.object_y_min[5][m] + self.object_y_max[5][m]) // 2
                        # 紅在黃內（更嚴）
                        if abs(yx - rx) <= 5 and abs(yy - ry) <= 5:
                            self.red_x, self.red_y = rx, ry
                            self.found = True
                            self.new_object_info = False
                            return

        # 沒找到
        self.red_x, self.red_y = 0, 0
        self.new_object_info = False

    #=================================================================
    def shoot(self):
        # one-shot timer 觸發
        self.get_logger().error("!!!!!! SHOOT !!!!!!")
        self.sendBodySector(SHOOT)  # 射擊
        self.drawImageFunction(6, 1,
                               int(self.lowest_x - 1), int(self.lowest_x + 1),
                               int(self.lowest_y - 1), int(self.lowest_y + 1),
                               255, 0, 255)
        time.sleep(2)
        self.sendBodySector(HAND_BACK_SECTOR)  # 手部退回
        time.sleep(2)

        # 關掉 timer
        if self.timer is not None:
            try:
                self.timer.cancel()
            except Exception:
                pass
            self.timer = None

        self.archery_action_ready = False
        self.back_flag = True

    #=================================================================
    def run(self):
        # 未啟動：待機與歸位
        if not self.is_start:
            self.get_logger().info("NOT starting")
            if self.stand == 0:
                self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
                time.sleep(0.5)
                self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
                time.sleep(0.5)
                # self.sendBodySector(PREPARE)
                # time.sleep(3.5)
                self.stand = 1
                self.get_logger().info("預備動作執行完畢")
                self.get_logger().info("stop")

            # 若剛射完，做復位
            if self.back_flag:
                self.get_logger().info('in the back_flag')
                self.get_logger().info(f'self.turn_right_cnt:{self.turn_right_cnt}')
                self.get_logger().info(f'self.turn_left_cnt:{self.turn_left_cnt}')
                if self.turn_right_cnt != 0:
                    self.sendSingleMotor(WAIST_MOTOR, int(-(RIGHT_TURN * self.turn_right)), 15)
                    time.sleep(0.5)
                    self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
                    time.sleep(0.5)
                    self.get_logger().info('waist_back')
                    time.sleep(2)
                elif self.turn_left_cnt != 0:
                    self.sendSingleMotor(WAIST_MOTOR, int(-(LEFT_TURN * self.turn_left)), 15)
                    time.sleep(0.5)
                    self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
                    time.sleep(0.5)
                    self.get_logger().info('waist_back')
                    time.sleep(2)

                for _ in range(self.hand_back_cnt):
                    self.sendBodySector(HAND_BACK)
                    self.get_logger().info(f'HAND_back_cnt:{self.hand_back_cnt}')
                    self.hand_back_cnt -= 1
                    time.sleep(0.5)

                for _ in range(self.leg_back_cnt):
                    self.sendBodySector(LEG_BACK)
                    self.get_logger().info(f'LEG_back_cnt:{self.leg_back_cnt}')
                    self.leg_back_cnt -= 1
                    time.sleep(0.5)

                self.back_flag = False

            self.init_cnt = 1
            time.sleep(1)
            return

        # ========= 已啟動 =========
        # 首次進來做頭部定位
        if self.init_cnt == 1:
            self.initial()
            self.init_cnt = 0
            self.sendHeadMotor(VERTICAL_HEAD_MOTOR, HEAD_CHECK, 80)
            time.sleep(0.05)
            self.sendHeadMotor(VERTICAL_HEAD_MOTOR, HEAD_CHECK, 80)
            time.sleep(0.05)
            self.sendHeadMotor(VERTICAL_HEAD_MOTOR, VERTICAL_HEAD, 80)
            time.sleep(0.05)
            self.sendHeadMotor(VERTICAL_HEAD_MOTOR, VERTICAL_HEAD, 80)
            time.sleep(2)

        # 取最新偵測
        self.find()

        if self.ctrl_status == 'find_period':
            if self.found:
                self.x_points.append(self.red_x)
                self.y_points.append(self.red_y)

                self.get_logger().warn(f"x: {self.red_x}")
                self.get_logger().warn(f"Y: {self.red_y}")

                # 第一次有效點：用偵測 stamp 當起點時間
                if not self.first_point and self.red_x != 0 and self.red_y != 0 and self.cur_det_ns:
                    self.start_ns = self.cur_det_ns
                    self.get_logger().info(f'start_ns = {self.start_ns}')
                    self.first_point = True

                # 本輪處理完成
                self.found = False

                # 收集到一定點數，判定是否回到起點附近 → 估計週期
                if len(self.x_points) > 10 and self.cur_det_ns and self.start_ns:
                    dis = ((self.red_x - self.x_points[0]) ** 2 + (self.red_y - self.y_points[0]) ** 2) ** 0.5
                    if dis <= 1.5:
                        self.end_ns = self.cur_det_ns
                        period_s = max(0.0, (self.end_ns - self.start_ns) / 1e9)
                        self.lowest_y = max(self.y_points)
                        self.lowest_x = self.x_points[self.y_points.index(self.lowest_y)]
                        self.get_logger().info(f"period_by_stamp = {period_s:.4f}s")
                        self.get_logger().info(f'low_y = {self.lowest_y}, low_x = {self.lowest_x}')
                        self.period_s = period_s
                        self.ctrl_status = 'archery_action'

        elif self.ctrl_status == 'wait_lowest_point':
            # 抵達目標最低點附近 → 排程射擊
            if abs(self.red_x - self.lowest_x) < 2 and abs(self.red_y - self.lowest_y) < 30 and hasattr(self, 'period_s'):
                fire_delay_s = max(0.0, self.period_s - SHOOT_DELAY)
                if self.timer is not None:
                    try:
                        self.timer.cancel()
                    except Exception:
                        pass
                    self.timer = None
                self.timer = self.create_timer(fire_delay_s, self.shoot)
                self.drawImageFunction(6, 1,
                                       int(self.lowest_x - 2), int(self.lowest_x + 2),
                                       int(self.lowest_y - 2), int(self.lowest_y + 2),
                                       0, 0, 255)
                self.get_logger().info(f"at lowest y, schedule shoot in {fire_delay_s:.3f}s")
                self.archery_action_ready = True
                self.ctrl_status = 'wait_shoot'
            else:
                self.get_logger().info(f'wait lowest point')

        elif self.ctrl_status == 'archery_action':
            # 決定 X_BENCHMARK 類型
            x = self.lowest_x
            if 0 < x <= 90:
                self.x_benchmark_type = 4  # 最右
            elif 90 < x <= 120:
                self.x_benchmark_type = 3  # 中右
            elif x >= 180:
                self.x_benchmark_type = 0  # 最左
            elif 155 <= x < 190:
                self.x_benchmark_type = 1  # 中左
            else:
                self.x_benchmark_type = 2  # 中間
            self.get_logger().info(f'X_BENCHMARK:{X_BENCHMARK[self.x_benchmark_type]}')

            # 轉腰 + 對頭
            if self.lowest_x - X_BENCHMARK[self.x_benchmark_type] > 0:
                self.turn_right = X_BENCHMARK[self.x_benchmark_type] - self.lowest_x
                self.sendSingleMotor(WAIST_MOTOR, int(RIGHT_TURN * self.turn_right), 15)
                time.sleep(0.5)
                self.sendHeadMotor(HORIZON_HEAD_MOTOR, int(3048 - (RIGHT_TURN * self.turn_right)), 15)
                time.sleep(0.5)
                self.get_logger().info('turn right')
                self.get_logger().info(f'turn angle:{self.turn_right}')
                self.get_logger().info(f'Motor_right:{RIGHT_TURN * self.turn_right}')
                self.turn_right_cnt = 1
                time.sleep(3)
            else:
                self.turn_left = X_BENCHMARK[self.x_benchmark_type] - self.lowest_x
                self.sendSingleMotor(WAIST_MOTOR, int(LEFT_TURN * self.turn_left), 15)
                time.sleep(0.5)
                self.sendHeadMotor(HORIZON_HEAD_MOTOR, int(3048 - (LEFT_TURN * self.turn_left)), 15)
                time.sleep(0.5)
                self.get_logger().info('turn left')
                self.get_logger().info(f'turn angle:{self.turn_left}')
                self.get_logger().info(f'Motor_left:{LEFT_TURN * self.turn_left}')
                self.turn_left_cnt = 1
                time.sleep(3)

            # 高低調整
            if self.lowest_y - Y_BENCHMARK > 0:
                self.leg_move_cnt = abs(int((Y_BENCHMARK - self.lowest_y) / 2))
                self.leg_back_cnt = self.leg_move_cnt
                self.get_logger().info('LEG_DOWN')
                self.get_logger().info(f'LEG_DOWN_cnt:{self.leg_move_cnt}')
                while self.leg_move_cnt != 0:
                    self.sendBodySector(LEG_DOWN)
                    self.leg_move_cnt -= 1
                    time.sleep(0.5)
            else:
                self.hand_move_cnt = abs(int((self.lowest_y - Y_BENCHMARK) / 2))
                self.hand_back_cnt = self.hand_move_cnt
                self.get_logger().info('HAND_UP')
                self.get_logger().info(f'HAND_UP_cnt:{self.hand_move_cnt}')
                while self.hand_move_cnt != 0:
                    self.sendBodySector(HAND_UP)
                    self.get_logger().info(f'HAND_UP_cnt:{self.hand_move_cnt}')
                    self.hand_move_cnt -= 1
                    time.sleep(0.5)

            time.sleep(0.1)
            self.ctrl_status = 'wait_lowest_point'

        elif self.ctrl_status == 'wait_shoot':
            # 等待 timer 觸發 shoot()
            pass


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
