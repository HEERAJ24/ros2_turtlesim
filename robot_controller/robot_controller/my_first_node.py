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
        # first_node is the name of the node
        super().__init__("first_node")
        self.counter = 0
        self.create_timer(1, self.time)
        
    def time(self):
        self.get_logger().info("Hi"+str(self.counter))
        self.counter += 1

# Main entry point
def main(args=None):
    # Initialize the ros client API for communication
    rclpy.init(args=args)
    # Create a new node
    node = MyNode()
    # Spin the node so the callback function is called
    rclpy.spin(node)
    rclpy.shutdown()

# Only if this file is executed in the terminal, add the main function to the stack
if __name__ == "__main__":
    main()
