#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64

class Num_Pub(Node):
    def __init__(self):
        super().__init__("num_pub")
        self.num_pub = self.create_publisher(Int64, "number", 10) 
        self.get_logger().info("num_pub node has been started") 
        self.create_timer(1, self.timer_call) 

    def timer_call(self):
        msg = Int64()
        msg.data = 2
        self.num_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = Num_Pub()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()