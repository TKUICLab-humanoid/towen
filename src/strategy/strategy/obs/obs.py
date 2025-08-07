from strategy.API import API
import rclpy
from std_msgs.msg import String

class Strategy(API):
    def __init__(self):
        super().__init__('obs')
        self.get_logger().info('Strategy node started')

    def run(self):
        try:
            while rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.1)
                if self.is_start:
                    self.get_logger().info(f"starting")
                else:
                    print("x = ",self.pose_z)
        except EnvironmentError:
            rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = Strategy()
    node.run()
    node.destroy_node()

if __name__ == '__main__':
    main()