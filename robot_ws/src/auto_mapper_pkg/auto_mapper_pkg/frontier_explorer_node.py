import rclpy
from rclpy.node import Node
from nav_msgs.msg import OccupancyGrid
from geometry_msgs.msg import PoseStamped, PoseWithCovarianceStamped
from visualization_msgs.msg import Marker, MarkerArray
import numpy as np

class FrontierExplorerNode(Node):
    def __init__(self):
        super().__init__('frontier_explorer_node')
        self.get_logger().info('Frontier Explorer Node has been started.')

        self.map_subscription = self.create_subscription(
            OccupancyGrid,
            '/map',
            self.map_callback,
            10)
        self.map_subscription  # prevent unused variable warning

        self.amcl_pose_subscription = self.create_subscription(
            PoseWithCovarianceStamped,
            '/amcl_pose',
            self.amcl_pose_callback,
            10)
        self.amcl_pose_subscription # prevent unused variable warning

        self.goal_publisher = self.create_publisher(PoseStamped, '/goal_pose', 10)
        self.frontier_marker_publisher = self.create_publisher(MarkerArray, 'frontier_markers', 10)

        self.current_map = None
        self.robot_pose = None

        # Timer to periodically check for frontiers and publish goals
        self.timer = self.create_timer(5.0, self.explore_timer_callback)

    def map_callback(self, msg):
        self.current_map = msg

    def amcl_pose_callback(self, msg):
        self.robot_pose = msg.pose.pose

    def map_to_world(self, map_x, map_y):
        # Convert map coordinates to world coordinates
        world_x = self.current_map.info.origin.position.x + map_x * self.current_map.info.resolution
        world_y = self.current_map.info.origin.position.y + map_y * self.current_map.info.resolution
        return world_x, world_y

    def find_frontiers(self):
        frontiers = []
        if self.current_map is None or self.robot_pose is None:
            return frontiers

        map_data = np.array(self.current_map.data).reshape(
            (self.current_map.info.height, self.current_map.info.width))

        # Iterate through the map cells
        for y in range(self.current_map.info.height):
            for x in range(self.current_map.info.width):
                cell_value = map_data[y, x]

                # Check if the cell is free space (0) or unknown (-1)
                if cell_value == 0: # Free space
                    # Check neighbors for unknown cells
                    is_frontier = False
                    for dy in [-1, 0, 1]:
                        for dx in [-1, 0, 1]:
                            if dx == 0 and dy == 0: continue

                            nx, ny = x + dx, y + dy
                            if 0 <= nx < self.current_map.info.width and 0 <= ny < self.current_map.info.height:
                                neighbor_value = map_data[ny, nx]
                                if neighbor_value == -1: # Unknown neighbor
                                    is_frontier = True
                                    break
                        if is_frontier: break

                    if is_frontier:
                        world_x, world_y = self.map_to_world(x, y)
                        frontiers.append((world_x, world_y))
        return frontiers

    def explore_timer_callback(self):
        if self.current_map is None or self.robot_pose is None:
            self.get_logger().info('Waiting for map and robot pose data...')
            return

        self.get_logger().info('Searching for frontiers...')
        frontiers = self.find_frontiers()

        self.publish_frontier_markers(frontiers)

        if len(frontiers) > 0:
            # For simplicity, pick the first frontier as the goal
            # In a real system, you'd pick the closest or most informative frontier
            target_x, target_y = frontiers[0]

            goal_pose = PoseStamped()
            goal_pose.header.frame_id = "map"
            goal_pose.header.stamp = self.get_clock().now().to_msg()
            goal_pose.pose.position.x = target_x
            goal_pose.pose.position.y = target_y
            goal_pose.pose.orientation.w = 1.0 # Facing forward (no rotation for now)

            self.goal_publisher.publish(goal_pose)
            self.get_logger().info(f'Published goal to: {target_x}, {target_y}')
        else:
            self.get_logger().info('No frontiers found. Map might be fully explored or no path to unknown areas.')

    def publish_frontier_markers(self, frontiers):
        marker_array = MarkerArray()
        for i, (x, y) in enumerate(frontiers):
            marker = Marker()
            marker.header.frame_id = "map"
            marker.header.stamp = self.get_clock().now().to_msg()
            marker.ns = "frontiers"
            marker.id = i
            marker.type = Marker.SPHERE
            marker.action = Marker.ADD
            marker.pose.position.x = x
            marker.pose.position.y = y
            marker.pose.position.z = 0.1
            marker.pose.orientation.w = 1.0
            marker.scale.x = 0.1
            marker.scale.y = 0.1
            marker.scale.z = 0.1
            marker.color.a = 1.0 # Alpha
            marker.color.r = 0.0 # Green
            marker.color.g = 1.0
            marker.color.b = 0.0
            marker_array.markers.append(marker)
        self.frontier_marker_publisher.publish(marker_array)

def main(args=None):
    rclpy.init(args=args)
    frontier_explorer_node = FrontierExplorerNode()
    rclpy.spin(frontier_explorer_node)
    frontier_explorer_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()