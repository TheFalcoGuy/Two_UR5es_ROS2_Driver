import rtde_receive
import rclpy
from rclpy.node import Node

from std_msgs.msg import Float32MultiArray


class JointTorqueBroadcaster(Node):

    def __init__(self):
        super().__init__('joint_torque_broadcaster')
        self.declare_parameter('robot_ip', '127.0.0.1')
        ip_addr = self.get_parameter('robot_ip').get_parameter_value().string_value
        self.rtde_r = rtde_receive.RTDEReceiveInterface(ip_addr)
        
        self.publisher_ = self.create_publisher(Float32MultiArray, 'joint_torque_data', 10)
        timer_period = 0.01  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Float32MultiArray()
        actual_q = self.rtde_r.getActualCurrent()
        msg.data = actual_q
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    joint_torque_broadcaster = JointTorqueBroadcaster()

    rclpy.spin(joint_torque_broadcaster)



if __name__ == '__main__':
    main()
