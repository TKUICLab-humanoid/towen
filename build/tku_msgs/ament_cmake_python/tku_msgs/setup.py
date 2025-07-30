from setuptools import find_packages
from setuptools import setup

setup(
    name='tku_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('tku_msgs', 'tku_msgs.*')),
)
