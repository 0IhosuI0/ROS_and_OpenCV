import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan

class Move_turtle(Node):
  def __init__(self):
    super().__init__('move_turtle')
    self.qos_profile = QoSProfile(depth = 10)
    self.scan_sub = self.create_subscription(
      LaserScan,
      'scan',
      self.scan_callback,
      qos_profile=qos_profile_sensor_data)
    self.velocity = 0.0
    self.angular = 0.0
    self.cnt = 0
    self.has_scan_received = False
    self.scan_ranges = []
    self.stop_turtle = self.create_publisher(Twist, 'cmd_vel', self.qos_profile)

    self.timer = self.create_timer(0.1, self.timer_callback)

  def scan_callback(self, msg):
    self.scan_ranges = msg.ranges
    self.has_scan_received = True
    self.get_logger().info(f'scanData: {self.scan_ranges[0]}', throttle_duration_sec=2)

  def timer_callback(self):
    if self.has_scan_received:
      self.detect_obstacle()

  def detect_obstacle(self):
    msg = Twist()
    left_range = int(len(self.scan_ranges) / 4)
    right_range = int(len(self.scan_ranges) *3 / 4)
    left_min = min(self.scan_ranges[0:left_range])
    right_min = min(self.scan_ranges[right_range:360])
    self.get_logger().info(f'left_min:{left_min}, right_min: {right_min}', throttle_duration_sec=2)
    msg.linear.x = 0.22
    if min(left_min, right_min) < 0.4:
      if min(left_min, right_min) < 0.25 and (abs(left_min - right_min) <= 0.3 or abs(left_min - right_min) <= 0.6):
        msg.linear.x = 0.0
        self.cnt += 1
        if abs(left_min - right_min) <= 0.01 or self.cnt == 5:
          msg.linear.x = -0.11
          self.cnt = 0
      if left_min < right_min:
        msg.angular.z = -0.3
      elif left_min >= right_min:
        msg.angular.z = 0.3
      else:
        msg.angular.z = 0.0

    self.stop_turtle.publish(msg)




def main(args=None):
  rclpy.init(args=args)
  node = Move_turtle()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
  main()
