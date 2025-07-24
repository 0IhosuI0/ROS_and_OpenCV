import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
import random
import time

class RandomExplorer(Node):
    def __init__(self):
        super().__init__('random_explorer')
        
        # 상수 정의
        self.OBSTACLE_DISTANCE = 0.3  # 장애물로 인식할 거리 (미터)
        self.FORWARD_SPEED = 0.2      # 직진 속도 (m/s)
        self.TURN_SPEED = 0.5         # 회전 속도 (rad/s)
        self.EXPLORE_TURN_PROB = 0.1  # 탐색 회전 확률 (0.0 ~ 1.0)
        self.EXPLORE_TURN_ANGLE = 0.3 # 탐색 회전 각도 (rad)

        # QoS 프로파일 및 퍼블리셔/서브스크라이버 생성
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10)
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)

        self.get_logger().info('Random Explorer node has been started.')

    def scan_callback(self, msg):
        """
        LaserScan 메시지를 수신할 때마다 호출되는 콜백 함수
        """
        twist_msg = Twist()
        
        # 전방 영역의 라이다 데이터 추출 (정면 0도 기준 좌우 30도, 총 60도)
        # 라이다 데이터는 보통 반시계 방향으로 증가합니다.
        front_ranges = msg.ranges[0:30] + msg.ranges[-30:]
        
        # 전방 영역의 최소 거리 계산 (inf 값은 무시)
        min_distance = min([r for r in front_ranges if r > 0])

        # 장애물 감지 로직
        if min_distance < self.OBSTACLE_DISTANCE:
            # 장애물 감지: 회전
            self.get_logger().info(f'Obstacle detected at {min_distance:.2f}m. Turning.')
            twist_msg.linear.x = 0.0
            twist_msg.angular.z = self.TURN_SPEED  # 왼쪽으로 회전
        else:
            # 장애물 없음: 직진 또는 탐색 회전
            self.get_logger().info('No obstacle detected. Moving forward.')
            twist_msg.linear.x = self.FORWARD_SPEED
            twist_msg.angular.z = 0.0

            # 무작위 탐색 회전 추가
            if random.random() < self.EXPLORE_TURN_PROB:
                turn_direction = random.choice([-1, 1]) # 왼쪽 또는 오른쪽
                twist_msg.angular.z = turn_direction * self.EXPLORE_TURN_ANGLE
                self.get_logger().info(f'Performing random exploration turn: {twist_msg.angular.z:.2f} rad/s')

        # Twist 메시지 발행
        self.publisher_.publish(twist_msg)


def main(args=None):
    rclpy.init(args=args)
    try:
        random_explorer = RandomExplorer()
        rclpy.spin(random_explorer)
    except KeyboardInterrupt:
        pass
    finally:
        random_explorer.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
