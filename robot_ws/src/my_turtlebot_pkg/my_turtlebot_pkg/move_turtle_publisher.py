import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile

class Move_turtle(Node):
  def __init__(self):
    super().__init__('move_turtle')
    self.qos_profile = QoSProfile(depth = 10)
    self.move_turtle = self.create_publisher(Twist, 'cmd_vel', self.qos_profile)
    self.timer = self.create_timer(1, self.turtle_move)
    self.key_move = 0.0
    self.key_angle = 0.0

  '''
  def input_keyboard(self):
    self.key_input = input("Input Key(W, A, S, D and F is Stop) >> ")
    if(self.key_input == 'w' or self.key_input == 'W'):
      self.key_move += 0.11
      if self.key_move > 0.22:
        self.key_move = 0.22
    elif(self.key_input == 's' or self.key_input == 'S'):
      self.key_move += -0.11
      if self.key_move < -0.22:
        self.key_move = -0.22
    elif(self.key_input == 'a' or self.key_input == 'A'):
      self.key_angle += 0.5
      if self.key_angle > 1.0:
        self.key_angle = 1.0
    elif(self.key_input == 'd' or self.key_input == 'D'):
      self.key_angle += -0.5
      if self.key_angle < -1.0:
        self.key_angle = -1.0
    elif(self.key_input == 'f' or self.key_input == 'F'):
      self.key_move = 0.0
      self.key_angle = 0.0
    else:
      self.key_move = 0.0
      self.key_angle = 0.0
  '''
  def input_keyboard(self):
    self.key_input = input("Input Key(W, A, S, D and F is Stop) >> ")
    if(self.key_input == 'w' or self.key_input == 'W'):
      self.key_move += 1.5
    elif(self.key_input == 's' or self.key_input == 'S'):
      self.key_move += -1.5
    elif(self.key_input == 'a' or self.key_input == 'A'):
      self.key_angle += +1.0
    elif(self.key_input == 'd' or self.key_input == 'D'):
      self.key_angle += -1.0
    elif(self.key_input == 'f' or self.key_input == 'F'):
      self.key_move = 0.0
      self.key_angle = 0.0
    else:
      self.key_move = 0.0
      self.key_angle = 0.0


  def turtle_move(self):
    self.input_keyboard()
    msg = Twist()
    msg.linear.x = self.key_move
    msg.linear.y = 0.0
    msg.linear.z = 0.0

    msg.angular.x = 0.0
    msg.angular.y = 0.0
    msg.angular.z = self.key_angle
    self.move_turtle.publish(msg)
    self.get_logger().info(f'Published mesage: {msg.linear}, {msg.angular}')



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

if __name__ == '__main':
  main()
