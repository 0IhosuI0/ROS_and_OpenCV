import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile
import cv2
import mediapipe as mp
import threading
mp_drawing = mp.solutions.drawing_utils
mp_drawing_styles = mp.solutions.drawing_styles
mp_hands = mp.solutions.hands

gesture_result = "0"

class Move_turtle(Node):
  def __init__(self):
    super().__init__('move_turtle')
    self.qos_profile = QoSProfile(depth = 10)
    self.move_turtle = self.create_publisher(Twist, 'cmd_vel', self.qos_profile)
    self.timer = self.create_timer(0.3, self.turtle_move)
    self.key_move = 0.0
    self.key_angle = 0.0

    thred = threading.Thread(target=cap_hand, daemon=True)
    thred.start()
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

  def input_hand(self):

    result = gesture_result

    if result == '0':
      self.key_move = 0.0
      self.key_angle = 0.0
    elif result == '1':
      self.key_move = 0.04
      self.key_angle = 0.0
    elif result == '2':
      self.key_move = 0.07
      self.key_angle = 0.0
    elif result == '3':
      self.key_move = 0.11
      self.key_angle = 0.0
    elif result == '4':
      self.key_move = 0.18
      self.key_angle = 0.0
    elif result == '5':
      self.key_move = 0.2
      self.key_angle = 0.0
    elif result == "left turn":
       self.key_move = 0.0
       self.key_angle = 1.0
    elif result == "right turn":
       self.key_move = 0.0
       self.key_angle = -1.0
    elif result == "back":
       self.key_move = -0.11
       self.key_angle = 0.0
    else:
      self.key_move = 0.0

  def turtle_move(self):
    self.input_hand()
    msg = Twist()
    msg.linear.x = self.key_move
    msg.linear.y = 0.0
    msg.linear.z = 0.0

    msg.angular.x = 0.0
    msg.angular.y = 0.0
    msg.angular.z = self.key_angle
    self.move_turtle.publish(msg)
    self.get_logger().info(f'Published mesage: {msg.linear}, {msg.angular}, {gesture_result}')

def classify_hand(hand_landmarks):
    results = "I dont know"
    thumb_tip = hand_landmarks.landmark[4]
    index_tip = hand_landmarks.landmark[8]
    middle_tip = hand_landmarks.landmark[12]
    ring_tip = hand_landmarks.landmark[16]
    pinky_tip = hand_landmarks.landmark[20]

    landmarks = hand_landmarks.landmark
    def is_finger_straight(finger_tip_idx, finger_dip_idx):
        return landmarks[finger_tip_idx].y < landmarks[finger_dip_idx].y

    # 손가락 펼침 여부
    index_straight = is_finger_straight(8, 6)
    middle_straight = is_finger_straight(12, 10)
    ring_straight = is_finger_straight(16, 14)
    pinky_straight = is_finger_straight(20, 18)
    thumb_open = landmarks[4].x < landmarks[3].x  # 엄지 위치 판단(개개인 손 방향에 따라 조정 필요)

    if thumb_open and index_straight and not middle_straight and not ring_straight and not pinky_straight:
       results = "1"
    elif thumb_open and index_straight and middle_straight and not ring_straight and not pinky_straight:
        results =  "2"
    elif thumb_open and index_straight and middle_straight and ring_straight and not pinky_straight:
        results =  "3"
    elif thumb_open and not index_straight and not middle_straight and not ring_straight and not pinky_straight:
        results =  "0"
    elif thumb_open and index_straight and middle_straight and ring_straight and pinky_straight:
        results = "4"
    elif not thumb_open and index_straight and middle_straight and ring_straight and pinky_straight:
        results =  "5"
    elif not thumb_open and not index_straight and not middle_straight and not ring_straight and not pinky_straight:
        results =  "right turn"
    elif thumb_open and not index_straight and not middle_straight and not ring_straight and pinky_straight:
        results =  "left turn"
    elif not thumb_open and not index_straight and not middle_straight and not ring_straight and pinky_straight:
        results =  "back"

    return results


def cap_hand():
    global gesture_result
    cap = cv2.VideoCapture(0)
    with mp_hands.Hands(
        model_complexity=0,
        min_detection_confidence=0.5,
        min_tracking_confidence=0.5) as hands:
        while cap.isOpened():
            success, image = cap.read()
            if not success:
                print("카메라를 찾을 수 없습니다.")
                # 동영상을 불러올 경우는 'continue' 대신 'break'를 사용합니다.
                continue

       # 필요에 따라 성능 향상을 위해 이미지 작성을 불가능함으로 기본 설정합니다.
            image.flags.writeable = False
            image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
            results = hands.process(image)

            # 이미지에 손 주석을 그립니다.
            image.flags.writeable = True
            image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)

            gesture = "hands detect"

            if results.multi_hand_landmarks:
                for hand_landmarks in results.multi_hand_landmarks:
                    mp_drawing.draw_landmarks(
                    image,
                    hand_landmarks,
                    mp_hands.HAND_CONNECTIONS,
                    mp_drawing_styles.get_default_hand_landmarks_style(),
                    mp_drawing_styles.get_default_hand_connections_style())

                gesture = classify_hand(hand_landmarks)

            gesture_result = gesture
            cv2.putText(image, gesture, (10, 50), cv2.FONT_HERSHEY_SIMPLEX, 1.5, (0,255,0), 3)
            cv2.imshow('MediaPipe Hands', image)
            if cv2.waitKey(5) & 0xFF == 27:
                break
    cap.release()




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
