from setuptools import find_packages, setup

package_name = 'zed_yolo'
cv_viewer = 'zed_yolo/cv_viewer'
ogl_viewer = 'zed_yolo/ogl_viewer'
setup(
    name=package_name,
    version='0.0.0',
    # packages=[find_packages(exclude=['test']), cv_viewer, ogi_viewer],
    packages=[package_name, cv_viewer, ogl_viewer],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='w1648n@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'zed_inference = zed_yolo.zed_inference:main'
        ],
    },
)
