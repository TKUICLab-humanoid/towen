from strategy.API import API
import rclpy
from std_msgs.msg import String
import numpy as np
import time
import math
import rclpy.duration

HORIZON_HEAD = 3048
VERTICAL_HEAD = 2048
HEAD_CHECK = 2080
HAND_BACK = 23
LEG_BACK = 21

X_BENCHMARK = [220, 220, 220, 220, 295] #改大射左 #[最左,中左,中間,中右,最右]
Y_BENCHMARK = 155 #改大射高
SHOOT_DELAY = 0.1 #改大變快

#motion sector
PREPARE = 10   #預備動作  需要舉手+夾手的motion list
SHOOT = 91       #射擊磁區  拉加放手
HAND_BACK_SECTOR = 13 #手放回去
HAND_UP = 22     #抬手(還沒弄)
LEG_DOWN = 20   #蹲腳(還沒弄)

#馬達
HORIZON_HEAD_MOTOR = 2 #左右扭頭馬達
VERTICAL_HEAD_MOTOR = 1 #上下扭頭馬達
WAIST_MOTOR = 15 #腰的馬達

#========================================================
RIGHT_TURN = 2.4
LEFT_TURN = 2.4
#========================================================

####下面這句要用啥替換
#rospy.loginfo跟rospy.logerr都用self.get_logger().info替換
#新東西

#========================================================
#找目標
#改一半而已
# class ArcheryTarget(API):
#     def __init__(self):
#         self.red_x = 0
#         self.red_y = 0
#         self.biggest_blue_idx = 0
#         self.found = False
        
#     def find(self):
#         self.found = False
#         #if self.get_object: #API計算，有看到東西 get_object = True
#         if self.color_counts[2]>0:# 找出最大面積藍色區塊的 index
#             self.biggest_blue_idx = np.argmax(self.object_sizes[2])  # 最大值的 index
#             self.get_logger().info(f"get biggest blue, number = {self.biggest_blue_idx}")
#             self.get_logger().info(f"get biggest blue, size = {self.object_sizes[2][self.biggest_blue_idx]}")

#             self.bx = (self.object_x_min[2][self.biggest_blue_idx] + self.object_x_max[2][self.biggest_blue_idx]) // 2
#             self.by = (self.object_y_min[2][self.biggest_blue_idx] + self.object_y_max[2][self.biggest_blue_idx]) // 2

#             for k in range(self.color_counts[1]):  # 黃色
#                 self.yx = (self.object_x_min[1][k] + self.object_x_max[1][k]) // 2
#                 self.yy = (self.object_y_min[1][k] + self.object_y_max[1][k]) // 2

#                 for m in range(self.color_counts[5]):  # 紅色
#                     self.rx = (self.object_x_min[5][m] + self.object_x_max[5][m]) // 2
#                     self.ry = (self.object_y_min[5][m] + self.object_y_max[5][m]) // 2

                
#                     if -5 <= self.bx - self.yx <= 5 and -5 <= self.by - self.yy <= 5:#確定黃圈在藍圈裡面
#                         if -5 <= self.yx - self.rx <= 5 and -5 <= self.yy - self.ry <= 5:#確定紅圈在黃圈裡面
#                             self.red_x = self.rx
#                             self.red_y = self.ry
#                             self.found = True
#                             self.get_logger().info(f"FOUND!!!!!!!!")
#                             return
#             #for j in range (self.color_counts[2]): #藍色
#                 #for k in range (self.color_counts[1]): #黃色
#                     #for m in range (self.color_counts[5]): #紅色
#                         #if -5 <= np.array(self.color_mask_subject_X[2])[j] - np.array(self.color_mask_subject_X[1])[k] < 5 and \
#                             #-5 <= np.array(self.color_mask_subject_Y[2])[j] - np.array(self.color_mask_subject_Y[1])[k] <= 5:
#                             #if -5 <= np.array(self.color_mask_subject_X[1])[k] - np.array(self.color_mask_subject_X[5])[m] <= 5 and \
#                                 #-5 <= np.array(self.color_mask_subject_Y[1])[k] - np.array(self.color_mask_subject_Y[5])[m] <= 5:
#                                 #self.red_x = np.array(self.color_mask_subject_X[5])[m]
#                                 #self.red_y = np.array(self.color_mask_subject_Y[5])[m]
#                                 #self.red_y = np.array(self.color_mask_subject_Y[5])[m]
#                                 #self.found = True

#             #self.get_object = False
#         else:
#             self.red_x, self.red_y = 0, 0
#========================================================)


class Strategy(API):
    def __init__(self):
        super().__init__('ar')
        self.get_logger().info('Strategy node started')
        #######################################
        self.red_x = 0
        self.red_y = 0
        self.biggest_blue_idx = 0
        self.found = False
        # self.archery_target = ArcheryTarge
        #######################################
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
        self.start_time = 0
        self.end_time = 0
        self.init_cnt = 0
        self.archery_action_ready = False
        self.waist_delay = 0
        self.circle_diameter = 0
        self.timer = 0
        self.back_flag = False
        self.turn_left_cnt = 0
        self.turn_right_cnt = 0
        self.hand_back_cnt = 0
        self.leg_back_cnt = 0
        self.waist_delay = 0
        self.x_benchmark_type = 0

    
    #=================================================================
    #初始化數值用
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
        self.start_time = 0
        self.end_time = 0
        self.archery_action_ready = False
        self.waist_delay = 0
        self.timer = 0
        self.back_flag = False
        self.waist_delay = 0
        self.x_benchmark_type = 0
        self.turn = 0
    #=================================================================）

    def find(self):
        self.found = False
        #if self.get_object: #API計算，有看到東西 get_object = True
        if self.color_counts[2] > 0:# 找出最大面積藍色區塊的 index
            self.biggest_blue_idx = np.argmax(self.object_sizes[2])  # 最大值的 index
            #self.get_logger().info(f"get biggest blue, number = {self.biggest_blue_idx}")
            #self.get_logger().info(f"get biggest blue, size = {self.object_sizes[2][self.biggest_blue_idx]}")

            self.bx = (self.object_x_min[2][self.biggest_blue_idx] + self.object_x_max[2][self.biggest_blue_idx]) // 2
            self.by = (self.object_y_min[2][self.biggest_blue_idx] + self.object_y_max[2][self.biggest_blue_idx]) // 2

            for k in range(self.color_counts[1]):  # 黃色
                self.yx = (self.object_x_min[1][k] + self.object_x_max[1][k]) // 2
                self.yy = (self.object_y_min[1][k] + self.object_y_max[1][k]) // 2

                for m in range(self.color_counts[5]):  # 紅色
                    self.rx = (self.object_x_min[5][m] + self.object_x_max[5][m]) // 2
                    self.ry = (self.object_y_min[5][m] + self.object_y_max[5][m]) // 2

                
                    if -5 <= self.bx - self.yx <= 5 and -5 <= self.by - self.yy <= 5:#確定黃圈在藍圈裡面
                        if -5 <= self.yx - self.rx <= 5 and -5 <= self.yy - self.ry <= 5:#確定紅圈在黃圈裡面
                            self.red_x = self.rx
                            self.red_y = self.ry
                            self.found = True
                            self.get_logger().info(f"FOUND!!!!!!!!")
                            return
            #for j in range (self.color_counts[2]): #藍色
                #for k in range (self.color_counts[1]): #黃色
                    #for m in range (self.color_counts[5]): #紅色
                        #if -5 <= np.array(self.color_mask_subject_X[2])[j] - np.array(self.color_mask_subject_X[1])[k] < 5 and \
                            #-5 <= np.array(self.color_mask_subject_Y[2])[j] - np.array(self.color_mask_subject_Y[1])[k] <= 5:
                            #if -5 <= np.array(self.color_mask_subject_X[1])[k] - np.array(self.color_mask_subject_X[5])[m] <= 5 and \
                                #-5 <= np.array(self.color_mask_subject_Y[1])[k] - np.array(self.color_mask_subject_Y[5])[m] <= 5:
                                #self.red_x = np.array(self.color_mask_subject_X[5])[m]
                                #self.red_y = np.array(self.color_mask_subject_Y[5])[m]
                                #self.red_y = np.array(self.color_mask_subject_Y[5])[m]
                                #self.found = True

            #self.get_object = False
        else:
            self.red_x, self.red_y = 0, 0



    
    #=================================================================
    #射擊用
    #event刪掉
    def shoot(self):
        self.get_logger().error(f"###### in SHOOT func #####")
        if self.archery_action_ready:
            #print(event.current_expected)
            #print(event.current_real)
            #print('=================', event.current_real - event.current_expected, '==================')
            time.sleep(self.end_time - self.start_time - SHOOT_DELAY)# + self.waist_delay)
            self.get_logger().error(f"!!!!!! SHOOT !!!!!!!")
            self.sendBodySector(SHOOT) #射擊動作 456
            self.drawImageFunction(6, 1, self.lowest_x-1, self.lowest_x+1, self.lowest_y-1, self.lowest_y+1, 255, 0, 255) #十字線
            time.sleep(2)
            self.sendBodySector(HAND_BACK_SECTOR)    #手部退回
            self.get_logger().info(f"RRRRRRRRRRR")
            time.sleep(2)
            #self.timer.shutdown()
            #新東西
            self.timer.cancel()
            self.archery_action_ready = False
            self.back_flag = True
    #=================================================================）

    #這裡原本就註解掉
    # def find_lowest(self, last_x, last_y):
    #     self.lowest_x = (last_x + self.datum_mark_x)*0.5 
    #     self.lowest_y = (last_y + self.datum_mark_y)*0.5 + self.circle_diameter
    #     self.get_logger().info(f'< lowest_x = {self.lowest_x} , lowest_y = {self.lowest_y} >')


    #=================================================================

    def api(self):
        ###### color info ######
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
        self.sendBodySector(29)                 # Execute Sector
        self.sendContinuousValue(1000,200,5)    # Change Walking (x, y, theta)

        ##### DIO info #####
        self.get_logger().info(f"strategy_status = {self.is_start}")    # Switch for Strategy 
        self.get_logger().info(f"DIO_Total = {self.dio}")               # Switch for DIO (0x00-0x1C)

    #=================================================================）

    
    def run(self):
        try:
            while rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.1)
                if self.is_start:
                    self.get_logger().info(f"STARTING")

                    #=================================================================
                    #以下為撥策略會做的事
                    #瞄準動作====================================
                    if self.init_cnt == 1: #init_cnt初始為0，執行完預備動作切換為1
                        self.initial() #初始化數值
                        self.init_cnt = 0 #避免進來第二次
                        self.sendHeadMotor(VERTICAL_HEAD_MOTOR, HEAD_CHECK, 80)
                        time.sleep(0.05)
                        self.sendHeadMotor(VERTICAL_HEAD_MOTOR, HEAD_CHECK, 80)
                        time.sleep(0.05)
                        self.sendHeadMotor(VERTICAL_HEAD_MOTOR, VERTICAL_HEAD, 80)
                        time.sleep(0.05)
                        self.sendHeadMotor(VERTICAL_HEAD_MOTOR, VERTICAL_HEAD, 80)
                        time.sleep(2)
                    # print(self.color_mask_subject_size)
                    
                    self.get_logger().info(f"start find")
                    self.find()#找把(濾波)

                    if self.ctrl_status == 'find_period': #初始status為find_period
                        if self.found:#在self.archery_target.find()結束後被切為True，找到把之後才會進來
                            self.x_points.append(self.red_x)#把red_x值丟到空矩陣x_points中
                            self.y_points.append(self.red_y)#把red_y值丟到空矩陣y_points中

                            
                            self.get_logger().warn(f"x: {self.red_x}")
                            self.get_logger().warn(f'Y: {self.red_y}')
                            if not self.first_point:#初始False
                                if self.x_points[0] and self.y_points[0] != 0:#x_points & y_points矩陣的第一項不為0 #雙重保障，避免開策略第一瞬間沒看到把red_x & red_y = 0丟到矩陣裡
                                    time.sleep(0.2)
                                    self.first_point = True
                            self.found = False 

                            if len(self.x_points) > 1:
                                dis = ((self.red_x-self.x_points[0])**2 + (self.red_y-self.y_points[0])**2)**0.5 #算出第二個點跟第一個點的距離(畢氏定理)
                                if dis <= 1.5: #距離<1.5
                                    self.end_time = time.time()
                                    self.lowest_y = max(self.y_points)#紅色最低點丟到lowest_y
                                    self.lowest_x = self.x_points[self.y_points.index(self.lowest_y)]#紅色最低點的y對應的x丟到lowest_x
                                    self.get_logger().info(f"endtime = {self.end_time}")
                                    self.get_logger().info(f"period = {self.end_time - self.start_time}")
                                    self.get_logger().info(f'low_y = :{self.lowest_y}')
                                    self.get_logger().info(f'low_x = :{self.lowest_x}')
                                    self.ctrl_status = 'wait_lowest_point'
                            else:
                                self.start_time = time.time()
                                self.get_logger().info(f'starttime = {self.start_time}')

                    elif self.ctrl_status == 'wait_lowest_point':
                        dis = ((self.red_x-self.lowest_x)**2 + (self.red_y-self.lowest_y)**2)**0.5#算出新抓到點跟最低點的距離
                        if dis <= 1.5:
                            #新東西
                            self.timer = self.create_timer((self.end_time - self.start_time), self.shoot)
                            self.drawImageFunction(6, 1, self.lowest_x-2, self.lowest_x+2, self.lowest_y-2, self.lowest_y+2, 0, 0, 255)
                            self.get_logger().info("at lowest y")
                            if self.init_cnt != 2: #第一次進來init_cnt=0
                                self.ctrl_status = 'archery_action'
                            else:
                                self.archery_action_ready = True
                                self.ctrl_status = 'wait_shoot'
                        
                    
                    #射箭動作==========================================
                    elif self.ctrl_status == 'archery_action': #轉腰+蹲
                        # archery_action call sector
                        #turn waist
                        if 0 < self.lowest_x <= 90: #最右
                            self.x_benchmark_type = 4#改大射左
                            print("444444444444444444444")
                        elif 90 < self.lowest_x <= 120: #中右  
                            self.x_benchmark_type = 3
                            print("333333333333333333333")
                        elif self.lowest_x >= 180: #最左
                            self.x_benchmark_type = 0
                            print("00000000000000000000")
                        elif 190 > self.lowest_x >= 155: #中左
                            self.x_benchmark_type = 1
                            print("1111111111111111111")
                        else:
                            self.x_benchmark_type = 2 #中間
                            print("22222222222222222222")
                        self.get_logger().info(f'X_BENCHMARK:{X_BENCHMARK[self.x_benchmark_type]}')
                        if self.lowest_x - X_BENCHMARK[self.x_benchmark_type] > 0:#站在左邊
                            self.turn_right = X_BENCHMARK[self.x_benchmark_type] - self.lowest_x
                            self.sendSingleMotor(WAIST_MOTOR,int(RIGHT_TURN*self.turn_right),15)#轉腰
                            right = RIGHT_TURN*self.turn_right
                            self.get_logger().info('turn right')
                            self.get_logger().info(f'turn angle:{self.turn_right}')
                            self.get_logger().info(f'Motor_right:{right}')
                            self.turn_right_cnt = 1 #1代表轉過腰
                            # self.waist_delay = 0.3
                            time.sleep(3)

                        else:#站在右邊
                            self.turn_left = X_BENCHMARK[self.x_benchmark_type] - self.lowest_x
                            self.sendSingleMotor(WAIST_MOTOR,int(LEFT_TURN*self.turn_left),15)
                            left = LEFT_TURN*self.turn_left
                            self.get_logger().info('turn left')
                            self.get_logger().info(f'turn angle:{self.turn_left}')
                            self.get_logger().info(f'Motor_left:{left}')
                            self.turn_left_cnt = 1
                            # self.waist_delay = 0.3
                            time.sleep(3)

                        #目標太低=>用腿蹲低
                        if self.lowest_y - Y_BENCHMARK > 0:
                            self.leg_move_cnt = abs(int((Y_BENCHMARK - self.lowest_y) / 2))#經驗談
                            self.leg_back_cnt = self.leg_move_cnt
                            self.get_logger().info('LEG_DOWN')
                            self.get_logger().info(f'LEG_DOWN_cnt:{self.leg_move_cnt}')
                            while self.leg_move_cnt != 0:
                                self.sendBodySector(LEG_DOWN) #蘿菠蹲
                                self.leg_move_cnt -= 1
                                time.sleep(0.5)
                        
                        #目標太高=>手舉高
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
                        self.timer.cancel()
                        time.sleep(0.1)
                        self.initial()
                        time.sleep(0.1)
                        self.init_cnt = 2
                        self.ctrl_status = 'find_period'

                    elif self.ctrl_status == 'wait_shoot':
                        time.sleep(1)
                        self.get_logger().info('wait shoot')


                    #=================================================================）



                else:
                    self.get_logger().info(f"NOT starting")
                    
                    #=================================================================
                    ###以下為歸位or nothing會做的事

                    if self.stand == 0: #stand初始為0
                        self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
                        time.sleep(0.5)
                        self.sendHeadMotor(HORIZON_HEAD_MOTOR, HORIZON_HEAD, 80)
                        time.sleep(0.5)
                        self.sendBodySector(PREPARE) #預備動作123
                        time.sleep(3.5)
                        self.stand = 1 #stand變1，預備動作只會預備1次
                        self.get_logger().info(f"預備動作執行完畢")
                    if self.back_flag: #shoot副函式執行完back_flag會變True #大指撥關掉後會進來，把動作復原
                        print('in the back_flag')
                        self.get_logger().info(f'self.turn_right_cnt:{self.turn_right_cnt}')
                        self.get_logger().info(f'self.turn_left_cnt:{self.turn_left_cnt}')
                        print(int(-(LEFT_TURN*self.turn_left)))
                        print(int(-(RIGHT_TURN*self.turn_right)))
                        if self.turn_right_cnt != 0:
                            self.sendSingleMotor(WAIST_MOTOR,int(-(RIGHT_TURN*self.turn_right)),15)
                            time.sleep(0.5)
                            self.get_logger().info(f'waist_back')
                            time.sleep(2)
                        elif self.turn_left_cnt != 0:
                            self.sendSingleMotor(WAIST_MOTOR,int(-(LEFT_TURN*self.turn_left)),15)
                            time.sleep(0.5)
                            self.get_logger().info(f'waist_back')
                            time.sleep(2)
                        for i in range(0, self.hand_back_cnt):
                            self.sendBodySector(HAND_BACK)
                            self.get_logger().info(f'HAND_back_cnt:{self.hand_back_cnt}')
                            self.hand_back_cnt -= 1
                            time.sleep(0.5)
                        for i in range(0, self.leg_back_cnt):
                            self.sendBodySector(LEG_BACK)
                            self.get_logger().info(f'LEG_back_cnt:{self.leg_back_cnt}')
                            self.hand_back_cnt -= 1
                            time.sleep(0.5)
                        self.back_flag = False
                    #self.get_logger().error('not start')   
                    self.init_cnt = 1
                    time.sleep(1)

                    #================================================================)
                    
        except EnvironmentError:
            rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = Strategy()
    node.run()
    node.destroy_node()

if __name__ == '__main__':
    #不確定
    while not rclpy.shutdown():#劃出起始十字
        #self.drawImageFunction(4, 0, 0, 320, 120, 120, 0, 0, 0)
        #self.drawImageFunction(5, 0, 160, 160, 0, 240, 0, 0, 0)
        main()
    