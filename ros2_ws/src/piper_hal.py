import rclpy 
from rclpy.node import Node 
from dls2_interface.msg import ArmState, ArmTrajectoryGenerator, ArmControlSignal

import numpy as np
import time

from piper_sdk import *


class PiperHALNode(Node):
    def __init__(self):
        super().__init__('Piper_HAL_Node')

        arm_state_freq = 300  # Hz 
        self.timer = self.create_timer(1/arm_state_freq, self.compute_piper_hal_callback)
        self.publisher_arm_blind_state = self.create_publisher(ArmState,"/arm_state", 1)
        self.subscriber_trajectory_generator_arm = self.create_subscription(ArmTrajectoryGenerator,"/arm_trajectory_generator", self.get_arm_trajectory_generator_callback, 1)
        self.subscriber_arm_control_signal = self.create_subscription(ArmControlSignal,"/arm_control_signal", self.get_arm_control_signal_callback, 1)

        # some init
        self.desired_arm_joints_position = np.zeros(6)
        self.desired_arm_joints_velocity = np.zeros(6)
        self.desired_arm_joints_torque = np.zeros(6)
        self.desired_gripper_position = 0.0
        self.desired_gripper_velocity = 0.0
        self.desired_gripper_torque = 0.0
        self.Kp_arm = 0
        self.Kd_arm = 0
        self.Kp_gripper = 0.0
        self.Kd_gripper = 0.0

        np.set_printoptions(precision=3, suppress=True)
        self.piper = C_PiperInterface_V2("can0")
        self.piper.ConnectPort()
        while( not self.piper.EnablePiper()):
            print("Enabling Piper...")
            time.sleep(0.01)
        print("Piper Enabled.")


    def get_arm_trajectory_generator_callback(self, msg):
        
        print("TODO: implement trajectory generator callback")


    def get_arm_control_signal_callback(self, msg):

        print("TODO: implement arm control signal callback")


    def compute_piper_hal_callback(self):
        print("TODO: implement piper hal callback")

        print(self.piper.GetArmJointMsgs())
        print(piper.GetArmGripperMsgs())


#---------------------------
if __name__ == '__main__':
    
    print('Hello from the Piper hal node.')
    
    rclpy.init()
    piper_hal_node = PiperHALNode()
    rclpy.spin(piper_hal_node)
    piper_hal_node.destroy_node()
    rclpy.shutdown()

    print("Piper hal node is stopped")
    exit(0)