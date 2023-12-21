#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

class pub_sub(Node):
    def __init__(self):
        super().__init__("pub_sub")
        self.cmd_vel_pub = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.sub=self.create_subscription(Pose, "/turtle1/pose", self.pubs, 10)
        self.get_logger().info("pub_sub node has been started")

    def pubs(self, msga:Pose):
        msg=Twist()
        self.get_logger().info("x: "+str(msga.x)+", y: "+str(msga.y)+", theta: "+str(msga.theta))
        if (msga.x<9 and msga.x>2) or (msga.y<9 and msga.y>2):
            msg.linear.x=2.0
            msg.angular.z=0.0
            self.cmd_vel_pub.publish(msg)        
        else:
            msg.linear.x=1.0
            msg.angular.z=2.0
            self.cmd_vel_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node=pub_sub()
    rclpy.spin(node)
    rclpy.shutdown()
 