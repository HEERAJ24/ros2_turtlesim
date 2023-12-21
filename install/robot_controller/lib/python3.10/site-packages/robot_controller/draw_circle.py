#!/usr/bin/env python3

# Add turtle sim dependency to the package.xml file
import rclpy
from rclpy.node import Node
# This information is received from the turtlebot3 cmd_vel topic info
# Import the Twist message type from the geometry_msgs package and add it to the dependencies in the package.xml file
# Any package you use should aslo be added to the dependencies in the package.xml file
from geometry_msgs.msg import Twist

class DarwCircleNode(Node):
    def __init__(self):
        super().__init__("draw_circle")
        self.cmd_vel_pub = self.create_publisher(Twist, "/turtle1/cmd_vel", 10) # 10 is the queue size
        self.get_logger().info("draw_circle node has been started") 
        self.create_timer(1, self.timer_call) # timer is like a thread that runs in the background
        # without creating a timer, the node will be terminated after the first message is published

    def timer_call(self):
        msg = Twist()
        msg.linear.x = 2.0
        msg.angular.z = 2.0
        self.cmd_vel_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = DarwCircleNode()
    rclpy.spin(node)
    rclpy.shutdown()
