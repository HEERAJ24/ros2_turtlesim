#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from msg_interface.srv import SetLed
from functools import partial
import time

class BatteryNode(Node):
    def __init__(self):
        super().__init__("battery_node")
        self.client = self.create_client(SetLed,"battery")
        self.timer_call1()


    def timer_call1(self):
         while self.client.wait_for_service(1.0)==False:
             self.get_logger().warn("Waiting for server battery_led") 
        
         request=SetLed.Request()
         request.ledno=3
         request.state="on"
    
         future = self.client.call_async(request)
         future.add_done_callback(partial(self.callback))
         secs, nsecs = self.get_clock().now().seconds_nanoseconds()
         self.get_logger().info("1 "+str(secs))
         time.sleep(4)
        
         request=SetLed.Request()
         request.ledno=3
         request.state="off"
    
         future = self.client.call_async(request)
         future.add_done_callback(partial(self.callback))
         secs, nsecs = self.get_clock().now().seconds_nanoseconds()
         self.get_logger().info("2 "+str(secs))
         time.sleep(8)
    
    def callback(self,future):
        try:
            response=future.result()
            self.get_logger().info(str(response.success))
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
        main()  
