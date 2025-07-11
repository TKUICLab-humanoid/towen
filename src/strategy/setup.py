from setuptools import find_packages, setup

package_name = 'strategy'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools','common_api'],
    zip_safe=True,
    maintainer='iclab',
    maintainer_email='iclab@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ar = strategy.ar.ar:main',
            'bb = strategy.bb.bb:main',
            'mar = strategy.mar.mar:main',
            'obs = strategy.obs.obs:main',
            'sp = strategy.sp.sp:main',
            'sr = strategy.sr.sr:main',
            'wl = strategy.wl.wl:main'
        ],
    },
)
