import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Get the launch directory
    auto_mapper_pkg_dir = get_package_share_directory('auto_mapper_pkg')
    mapper_params_file = os.path.join(auto_mapper_pkg_dir, 'config', 'mapper_params.yaml')
    planner_params_file = os.path.join(auto_mapper_pkg_dir, 'config', 'planner_params.yaml')
    controller_params_file = os.path.join(auto_mapper_pkg_dir, 'config', 'controller_params.yaml')

    # Get the nav2_bringup config directory for amcl params
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')
    amcl_params_file = os.path.join(nav2_bringup_dir, 'params', 'amcl_params.yaml')

    return LaunchDescription([
        Node(
            package='slam_toolbox',
            executable='async_slam_toolbox_node',
            name='slam_toolbox',
            output='screen',
            parameters=[
                mapper_params_file,
                {'use_sim_time': True}
            ],
            remappings=[
                ('/map', '/map'),
                ('/tf', '/tf'),
                ('/scan', '/scan'),
            ]
        ),
        Node(
            package='auto_mapper_pkg',
            executable='mapper_node',
            name='mapper_node',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ),
        Node(
            package='auto_mapper_pkg',
            executable='frontier_explorer_node',
            name='frontier_explorer_node',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ),
        Node(
            package='nav2_planner',
            executable='planner_server',
            name='planner_server',
            output='screen',
            parameters=[planner_params_file, {'use_sim_time': True}]
        ),
        Node(
            package='nav2_controller',
            executable='controller_server',
            name='controller_server',
            output='screen',
            parameters=[controller_params_file, {'use_sim_time': True}]
        ),
        Node(
            package='nav2_bt_navigator',
            executable='bt_navigator',
            name='bt_navigator',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ),
        Node(
            package='nav2_amcl',
            executable='amcl',
            name='amcl',
            output='screen',
            parameters=[amcl_params_file, {'use_sim_time': True}]
        ),
        Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_navigation',
            output='screen',
            parameters=[{'use_sim_time': True},
                        {'autostart': True},
                        {'node_names': ['planner_server', 'controller_server', 'bt_navigator', 'amcl']}]
        )
    ])