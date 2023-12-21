#!/usr/bin/env python3
# Using OOPs beacuse wihtout OOPs, we have to use spin_until_future_complete() which is not good. You can use only one spin function in a node.
# For example, if you have 2 services and 1 subscriber, you can use only 1 spin function. If you use 2 spin functions, it will not work.
# Or if you have one topic and one service, you can use only one spin function. If you use 2 spin functions, it will not work.

import rclpy
from rclpy.node import Node
from functools import partial
from example_interfaces.srv import AddTwoInts

class Add2intclient(Node):
    def __init__(self):
        super().__init__("add2intclient")
        self.call_add2int(3,2)

    def call_add2int(self,a,b):
        client = self.create_client(AddTwoInts,"add_2_int")
        while client.wait_for_service(1.0)==False:
            self.get_logger().warn("Waiting for server Add 2 int")

        request=AddTwoInts.Request()
        request.a=a
        request.b=b

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback,a=a,b=b))

    def callback(self,future,a,b):
        try:
            response=future.result()
            self.get_logger().info(str(a)+"+"+str(b)+"="+str(response.sum))
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = Add2intclient()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
        main()  
