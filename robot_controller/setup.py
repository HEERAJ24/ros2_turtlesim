from setuptools import find_packages, setup

package_name = 'robot_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hee',
    maintainer_email='hee@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        # Add an entry point to the setup.py file to create a new executable script
        # Use test_node as the name of the executable when running using ros2 run
        # Without this entry point, you would have to run the script using python3 -m robot_controller.my_first_node instead of ros2 run robot_controller test_node
        # Still first_node is the name of the node
        'console_scripts': [
            "test_node = robot_controller.my_first_node:main",
            # template: "executable_name = package_name.file_name:function_name"
            "draw_circle = robot_controller.draw_circle:main",
            "pose_sub = robot_controller.pose_sub:main",
            "pub_sub = robot_controller.pub_sub:main"
        ],
    },
)
