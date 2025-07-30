from setuptools import find_packages
from setuptools import setup

setup(
    name='webrtc_ros_msgs',
    version='59.0.4',
    packages=find_packages(
        include=('webrtc_ros_msgs', 'webrtc_ros_msgs.*')),
)
