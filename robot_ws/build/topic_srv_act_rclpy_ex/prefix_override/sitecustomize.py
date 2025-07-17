import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ghtn10000/robot_ws/install/topic_srv_act_rclpy_ex'
