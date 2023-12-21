from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    spawn_turtle_node = Node(
        package="turtlesim_project",
        executable="spawn_turtle",
        parameters=[
            {"spawn_sec": 3}
        ]
    )
    turtle_catch_node = Node(
        package="turtlesim_project",
        executable="turtle_catch",
    )

    turtle_sim_node = Node(
        package="turtlesim",
        executable="turtlesim_node",
    )

    ld.add_action(spawn_turtle_node)
    ld.add_action(turtle_catch_node)
    ld.add_action(turtle_sim_node)

    return ld