import rclpy
from rclpy.node import Node
from nav_msgs.msg import OccupancyGrid
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import LaserScan
from builtin_interfaces.msg import Time

class MapperNode(Node):
    def __init__(self):
        super().__init__('mapper_node')
        self.get_logger().info('Mapper Node has been started.')

        # Subscribers
        self.map_subscription = self.create_subscription(
            OccupancyGrid,
            'map',
            self.map_callback,
            10)
        self.map_subscription  # prevent unused variable warning

        self.pose_subscription = self.create_subscription(
            PoseStamped,
            'amcl_pose',
            self.pose_callback,
            10)
        self.pose_subscription  # prevent unused variable warning

        self.scan_subscription = self.create_subscription(
            LaserScan,
            'scan',
            self.scan_callback,
            10)
        self.scan_subscription  # prevent unused variable warning

        # Publishers (example, not strictly needed for basic mapping node)
        self.map_publisher = self.create_publisher(OccupancyGrid, 'my_processed_map', 10)

        self.last_map_time = Time()
        self.last_pose_time = Time()
        self.last_scan_time = Time()

    def map_callback(self, msg):
        self.get_logger().info(f'Received map data at {msg.header.stamp.sec}.{msg.header.stamp.nanosec}')
        self.last_map_time = msg.header.stamp
        # Process map data here if needed
        # self.map_publisher.publish(msg) # Example: re-publish the map

    def pose_callback(self, msg):
        self.get_logger().info(f'Received pose data at {msg.header.stamp.sec}.{msg.header.stamp.nanosec}')
        self.last_pose_time = msg.header.stamp
        # Process pose data here if needed

    def scan_callback(self, msg):
        self.get_logger().info(f'Received scan data at {msg.header.stamp.sec}.{msg.header.stamp.nanosec}')
        self.last_scan_time = msg.header.stamp
        # Process scan data here if needed

def main(args=None):
    rclpy.init(args=args)
    mapper_node = MapperNode()
    rclpy.spin(mapper_node)
    mapper_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
