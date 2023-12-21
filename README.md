# ros2_turtlesim

**Turtlesim Project:**
The Turtlesim Project is a ROS (Robot Operating System) application that simulates a game of catch between turtles in a 2D environment. The project is divided into several components, each responsible for a specific aspect of the simulation.

**Components**
Spawn_turtle
The Spawn_turtle class is a ROS node that spawns a new turtle in the turtlesim environment at a random location every spawn_sec seconds. It publishes the location and name of the new turtle to the /location and /turtle_name topics, respectively.

The Spawn_turtle class defines two methods:

__init__: This method is the constructor of the Spawn_turtle class. It initializes the node with the name "spawn_turtle", declares a parameter "spawn_sec" with a default value of 30, creates two publishers for the /location and /turtle_name topics, and creates a timer that calls the spawn method every spawn_sec seconds.

spawn: This method is called every spawn_sec seconds by the timer. It creates a Spawn service client and sends a request to spawn a new turtle at a random location. The x, y coordinates and the theta (orientation) of the turtle are randomly generated. The x and y coordinates are integers between 1 and 10, and the theta is a float between 0 and 2π. The method then publishes the location and name of the new turtle.

**Turtle_catch**
The Turtle_catch class is a ROS node that controls a turtle in the turtlesim environment. It subscribes to several topics to get information about the turtles' positions and publishes to the /turtle1/cmd_vel topic to control the movement of a turtle.

The Turtle_catch class defines three callback methods:

call_back: This method is called when a message is received on the /location topic. It stores the message in the location_ variable.

call_back2: This method is called when a message is received on the /turtle1/pose topic. It checks if the messages received from the /location and /turtle1/pose topics are not None. If they are not, it extracts the x and y coordinates from the /turtle1/pose message.

call_back3: This method is called when a message is received on the /turtle_name topic. The functionality of this method is not provided in the excerpt.

The Turtle_catch class also defines a publisher cmd_vel_pub that publishes to the /turtle1/cmd_vel topic. This publisher is used to control the movement of the turtle.

**Usage**
To use this project, you would typically run the launch file using ROS2's command-line tools. For example:

**ros2 launch turtlesim_project.launch.py**

This will start the turtlesim simulator and the other nodes. You should see turtles appearing in the simulator's window at random locations every spawn_sec seconds.
