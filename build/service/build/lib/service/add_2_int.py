#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class Add2int(Node):
    def __init__(self):
        super().__init__("add_2_int")
        self.service_=self.create_service(AddTwoInts,"add_2_int",self.callback_add_2_int)

    def callback_add_2_int(self,request,response):
        response.sum=request.a+request.b
        self.get_logger().info(str(request.a)+"+"+str(request.b)+"="+str(response.sum))
        return response



def main(args=None):
    rclpy.init(args=args)
    node = Add2int()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
        main()  
