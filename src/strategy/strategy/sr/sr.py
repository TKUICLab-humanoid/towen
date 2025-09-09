from strategy.API import API
import rclpy
from std_msgs.msg import String

class Strategy(API):
    def __init__(self):
        super().__init__('sr')
        self.get_logger().info('Strategy node started')
        self.hand_up = False
        self.stand = True
        self.hand_back = False
        self.first = True



    def run(self):
        try:
            while rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.1)
                if self.is_start:
                    self.get_logger().info(f"starting")
                    if self.xx > 0 and self.hand_up==False and self.stand == True:
                        self.sendBodySector(201)
                        self.hand_up = True
                        self.stand = False
                    elif self.hand_back == False and self.xx < 0 and self.stand == True:
                        self.sendBodySector(202)
                        self.hand_back = True
                        self.stand = False
                    elif self.xx == 0 and self.hand_up ==True and self.stand ==False:
                        self.sendBodySector(210)
                        self.hand_up = False
                        self.stand = True
                        self.hand_back = False
                    elif self.xx == 0 and self.hand_back==True and self.stand ==False:
                        self.sendBodySector(220)
                        self.hand_up = False
                        self.stand = True
                        self.hand_back = False
                    # if self.first:
                    #     self.sendbodyAuto(1)
                    #     self.first = False
                    #     self.sendBodySector(230)
                    #     self.time_sleep(0.36)
                    # self.sendBodySector(231)
                    # self.time_sleep(0.36)
                    # self.sendBodySector(232)
                    # self.time_sleep(0.36)
                    self.get_logger().info(f"x ={self.xx}")
                else:
                    self.get_logger().info(f"Finish")
                    # self.sendbodyAuto(0)
                    self.first = True
        except EnvironmentError:
            rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = Strategy()
    node.run()
    node.destroy_node()

if __name__ == '__main__':
    main()

# def api(self):
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