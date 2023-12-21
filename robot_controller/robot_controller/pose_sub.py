#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose

class PoseSub(Node):
    def __init__(self):
        super().__init__("pose_sub")
        self.msg=self.create_subscription(Pose, "/turtle1/pose",self.timer_call, 10) # Message type and topic name and callback function
        self.get_logger().info("pose_sub node has been started")

    def timer_call(self, msg:Pose):
        self.get_logger().info("x: "+str(msg.x)+", y: "+str(msg.y)+", theta: "+str(msg.theta))

def main(args=None):
    rclpy.init(args=args)
    node = PoseSub()
    rclpy.spin(node)
    rclpy.shutdown()