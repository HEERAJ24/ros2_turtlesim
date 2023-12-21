#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


def main(args=None): # no need to create class
    rclpy.init(args=args)
    node = Node("Add2int_client_no_oops") # create node without class

    client = node.create_client(AddTwoInts,"add_2_int") # create client without class. service type, service name (same as server)
    # If client is running and service is not running, it will wait until service is running
    while client.wait_for_service(1.0)==False:
        node.get_logger().warn("Waiting for server Add 2 int")

    request=AddTwoInts.Request() # create request object
    request.a=3
    request.b=2

    future_obj=client.call_async(request) # call service asynchronously
    rclpy.spin_until_future_complete(node,future_obj) # spin until future object is completed

    try:
        response=future_obj.result() # get result from future object
        node.get_logger().info(str(request.a)+"+"+str(request.b)+"="+str(response.sum))
    except Exception as e:
        node.get_logger().error("Service call failed %r" % (e,))

    rclpy.shutdown()

if __name__ == "__main__":
        main()  
