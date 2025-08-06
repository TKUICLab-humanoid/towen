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

    ld.add_action(DeclareLaunchArgument(
        'zoom_in',
        default_value='1.0',
        description='影像放大倍率 (float)，例如 2.0 代表放大 2 倍'
    ))
    zoom_in = LaunchConfiguration('zoom_in')
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
    parameters=[{
        "default_call_service_timeout": 5.0,
        "call_services_in_new_thread": True,
        "send_action_goals_in_new_thread": True,
    }],
    output="screen",

    )
    imageprocess_node = Node(
        package="imageprocess",
        executable="image",
        output="screen",
        parameters=[
            {'location': location},
            {'zoom_in': zoom_in},  # 新增的參數
        ],

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