from setuptools import find_packages, setup

package_name = 'activity_002'

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
        'console_scripts': [
            "num_pub = activity_002.num_pub:main",
            "num_count = activity_002.num_count:main",
            "battery_node = activity_002.battery_node:main",
            "led_panel = activity_002.led_panel:main"
        ],
    },
)
