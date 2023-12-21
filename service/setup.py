from setuptools import find_packages, setup

package_name = 'service'

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
            "add_2_int = service.add_2_int:main",
            "add2int_client_no_oops = service.add2int_client_no_oops:main",
            "add2intclient = service.add2intclient:main"
        ],
    },
)
