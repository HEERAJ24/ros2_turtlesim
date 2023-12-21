#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from msg_interface.msg import LedStates
from msg_interface.srv import SetLed

class LedPanel(Node):
    def __init__(self):
        super().__init__("led_panel")
        self.service_=self.create_service(SetLed,"battery",self.led_callback) 
        self.get_logger().info("Led node is started")
        self.state_=""
        self.publishers_ = self.create_publisher(LedStates,"led_states",10)
        self.create_timer(1,self.timer_call)

    def led_callback(self,request,response):
        self.state_=request.state
        response.success=True
        return response
    
    def timer_call(self):
        msg=LedStates()
        if self.state_=="on":
            msg.led="Charging"
        else:
            msg.led="Consuming"
        self.publishers_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = LedPanel()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
        main()  
