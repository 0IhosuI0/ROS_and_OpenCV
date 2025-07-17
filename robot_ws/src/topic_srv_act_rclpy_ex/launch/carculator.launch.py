from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package='topic_srv_act_rclpy_ex',
                executable='argument', output='screen'),
            Node(
                package='topic_srv_act_rclpy_ex',
                executable='calculator', output='screen'),
        ]
    )
