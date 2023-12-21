#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64
from example_interfaces.srv import SetBool

class Num_Count(Node):
    def __init__(self):
        super().__init__("num_count")
        self.num_count = self.create_subscription(Int64, "number", self.num_count_call, 10) 
        self.num = 0
        self.num_pub1 = self.create_publisher(Int64, "number_count", 10) 
        self.get_logger().info("num_count node has been started") 
        self.create_timer(1, self.num_time)
        self.service_=self.create_service(SetBool,"reset_counter",
                                          self.callback) 
        self.get_logger().info("Add 2 int is started")

    def callback(self,request,response):
        request.data=True
        response.success=True
        self.num=0
        self.get_logger().info("Reset Counter " + str(response.success))
        return response

    def num_time(self):
        msg = Int64()
        msg.data = self.num
        self.num_pub1.publish(msg) 

    def num_count_call(self, msg:Int64):
        self.num += msg.data
        
def main(args=None):
    rclpy.init(args=args)
    node = Num_Count()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()