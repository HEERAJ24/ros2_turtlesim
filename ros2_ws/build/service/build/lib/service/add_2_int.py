#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class Add2int(Node):
    def __init__(self):
        super().__init__("add_2_int")
        self.service_=self.create_service(AddTwoInts,"add_2_int",self.callback_add_2_int) # service type, service name (will be used in client), callback function
        self.get_logger().info("Add 2 int is started")

    def callback_add_2_int(self,request,response): # request is the input, response is the output. find using ros2 interface show example_interfaces/srv/AddTwoInts
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
