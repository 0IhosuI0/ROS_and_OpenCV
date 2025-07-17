from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                namespace= "turtlesim", package='turtlesim',
                executable='turtlesim_node', output='screen'),
            Node(
                namespace= "pub_cmd_vel", package='my_turtlesim_mobeturtle_pkg',
                executable='mv_turtle_pb', output='screen'),
        ]
    )
