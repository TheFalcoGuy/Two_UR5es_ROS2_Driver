import rclpy
from rclpy.node import Node
import socket
from std_msgs.msg import String
from std_msgs.msg import Int32
from std_msgs.msg import Int32MultiArray
from .rtu_robotiq_gripper import RtuRobotiqGripper
from .ur_robotiq_gripper import UrRobotiqGripper
import os
import time

class GripperController(Node):

    def __init__(self):
        super().__init__('gripper_control')
        self.publisher_ = self.create_publisher(Int32, 'gripper_pose', 10)
        self.subscription = self.create_subscription(Int32MultiArray, 'move_gripper', self.move_gripper, 10)
        timer_period = 0.01 # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        #Socket setings
        
        self.declare_parameter('robot_ip', '127.0.0.1')
        ip_addr = self.get_parameter('robot_ip').value
        self.get_logger().info("Ip address: %s" % ip_addr)
        if ip_addr == "127.0.0.2":

            self.grip = UrRobotiqGripper()
            PORT=63352 #PORT used by robotiq gripper
            self.get_logger().info("Connecting to ur...")
            self.grip.connect("192.168.0.88", PORT)
            self.get_logger().info("Successfully connected to ur")
        else:
            os.system ("echo weloverobots! | sudo -S chmod 666 /dev/ttyUSB1")
            self.get_logger().info("Connecting to rtu modbus...")
            self.grip = RtuRobotiqGripper("/dev/ttyUSB1", slaveaddress=9)
            self.grip.resetActivate()
            self.get_logger().info("Successfully connected to modbus")
        self.grip.activate()


    def timer_callback(self):
        try:
            data = self.grip.get_current_position()
        except:
            data = 0
        
        msg = Int32()
        msg.data = data
        self.publisher_.publish(msg)

    def move_gripper(self, msg):
        self.get_logger().info("heard %s" % msg.data)
        self.grip.goTo(msg.data[0], msg.data[1], msg.data[2])

        


def main(args=None):
    rclpy.init(args=args)
    gripper = GripperController()
    
    #Print finger position
    #Gripper finger position is between 0 (Full open) and 255 (Full close)
    rclpy.spin(gripper)



if __name__ == '__main__':
    main()