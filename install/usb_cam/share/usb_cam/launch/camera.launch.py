#!/usr/bin/env python3
import os
import sys
from pathlib import Path

# 如果不需要 CameraConfig 可以把下面兩行拿掉
# dir_path = os.path.dirname(os.path.realpath(__file__))
# sys.path.append(dir_path)

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # 宣告 location 參數
    ld.add_action(DeclareLaunchArgument(
        'location',
        default_value='ar',
        description='要載入的 config 目錄（選擇 ar / bb / sp / obs / mar / sr / wl）'
    ))
    location = LaunchConfiguration('location')

    # 建立各個 node
    web_video_server_node = Node(
        package="web_video_server",
        executable="web_video_server",
        output="screen",
    )
    rosapi_node = Node(
        package="rosapi",
        executable="rosapi_node",
        output="screen",
    )
    rosbridge_node = Node(
        package="rosbridge_server",
        executable="rosbridge_websocket",
        output="screen",
        parameters=[{"port": 9090}],
    )
    imageprocess_node = Node(
        package="imageprocess",
        executable="image",
        output="screen",
        parameters=[{'location': location}],
    )
    motion_node = Node(
        package="motionpackage",
        executable="motionpackage",
        output="screen",
        parameters=[{'location': location}],
    )

    # 把所有 node 收到一個 list
    all_nodes = [
        web_video_server_node,
        rosapi_node,
        rosbridge_node,
        imageprocess_node,
        motion_node,
    ]

    # 一次啟動
    ld.add_action(GroupAction(all_nodes))

    return ld