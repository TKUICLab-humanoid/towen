from strategy.API import API
import rclpy
from std_msgs.msg import String

class Strategy(API):
    def __init__(self):
        super().__init__('wl')
        self.get_logger().info('Strategy node started')

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


    def run(self):
        try:
            while rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.1)
                if self.is_start:
                    self.get_logger().info(f"starting")
                else:
                    self.get_logger().info(f"Finish")
        except EnvironmentError:
            rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = Strategy()
    node.run()
    node.destroy_node()

if __name__ == '__main__':
    main()