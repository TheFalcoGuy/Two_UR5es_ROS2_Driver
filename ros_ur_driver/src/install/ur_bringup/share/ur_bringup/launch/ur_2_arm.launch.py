from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch.substitutions import LaunchConfiguration
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import PushRosNamespace
from launch.actions import IncludeLaunchDescription
from launch.actions import GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource



def generate_launch_description():

    base = PathJoinSubstitution([FindPackageShare('ur_bringup'),'launch/'])


    left_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([base,"left_arm.launch.py"])
    )
    right_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([base,"right_arm.launch.py"])
    )
    left_launch_namespace = GroupAction(
        actions=[
            PushRosNamespace('left'),
            left_launch
        ]
    )

    right_launch_namespace = GroupAction(
        actions=[
            PushRosNamespace('right'),
            right_launch
        ]
    )


    return LaunchDescription([left_launch_namespace, right_launch_namespace])
