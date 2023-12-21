#!/usr/bin/env python3
# rclpy for ros code in python
import rclpy
# Import node class from rclpy to create a new node
from rclpy.node import Node
import time

# Create a new class that inherits from the Node class
class MyNode(Node):
    def __init__(self):
        # Initiate the Node class's constructor and give it a name
        super().__init__("first_node")
        for i in range(0, 1000):
            # Display info message on the terminal
            self.get_logger().info("Hell ROS2({})".format(i))
            time.sleep(1)

# Main entry point
def main(args=None):
    # Initialize the ros client API for communication
    rclpy.init(args=args)
    # Create a new node
    node = MyNode()
    # Spin the node so the callback function is called
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
