from setuptools import find_packages, setup
import os
import glob

package_name = 'my_turtlesim_mobeturtle_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob.glob(os.path.join('launch', '*.launch.py')))
    ],
    install_requires=['setuptools'],

    zip_safe=True,
    maintainer='ghtn10000',
    maintainer_email='ghtn10000@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mv_turtle_pb = my_turtlesim_mobeturtle_pkg.move_turtle_pb:main',
            'cmdps = my_turtlesim_mobeturtle_pkg.turtle_cmd_and_pse:main',
            'mss = my_turtlesim_mobeturtle_pkg.my_srv_server:main',
            'mssc = my_turtlesim_mobeturtle_pkg.my_srv_server_circle:main',
            'dts = my_turtlesim_mobeturtle_pkg.dist_srv:main',
            'sub = my_turtlesim_mobeturtle_pkg.my_subscriber:main',
            'mt = my_turtlesim_mobeturtle_pkg.my_multi_thread:main',
            'das = my_turtlesim_mobeturtle_pkg.dist_act_srv:main',
        ]
    },
)
