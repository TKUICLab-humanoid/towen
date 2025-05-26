from setuptools import setup, find_packages

package_name = 'wula'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(include=[package_name, package_name + '.*']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    author='Your Name',
    description='Humanoid wula nodes',
    entry_points={
        'console_scripts': [
            # ros2 run wula sp_boson
            'sp_boson = wula.sp.SP_boson:main',
            'mar = wula.mar.mar:main',
            # ros2 run wula obs_node
            # 'obs_node = wula.obs.ObsNode:main',
            # 更多 submodule...
        ],
    },
)
