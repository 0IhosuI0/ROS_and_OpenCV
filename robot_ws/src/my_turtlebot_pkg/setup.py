from setuptools import find_packages, setup

package_name = 'my_turtlebot_pkg'

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
    maintainer='ghtn10000',
    maintainer_email='ghtn10000@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
          'mv_turtle_pub = my_turtlebot_pkg.move_turtle_publisher:main',
          'scan = my_turtlebot_pkg.laser_scan:main',
          'Odo = my_turtlebot_pkg.position:main',
          'mvhd = my_turtlebot_pkg.move_turtle_hand_detect:main',
          'camera_subscriber = my_turtlebot_pkg.camera_subscriber:main',
          'obstacle_avoider = my_turtlebot_pkg.obstacle_avoider:main',
          'random_explorer = my_turtlebot_pkg.random_explorer:main'
        ],
    },
)
