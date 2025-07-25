#!/usr/bin/env python3

import glob
import os

from setuptools import find_packages
from setuptools import setup

package_name = 'topic_srv_act_rclpy_ex'
share_dir = 'share/' + package_name

setup(
    name=package_name,
    version='0.2.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        (share_dir, ['package.xml']),
        (share_dir + '/launch', glob.glob(os.path.join('launch', '*.launch.py'))),
        (share_dir + '/param', glob.glob(os.path.join('param', '*.yaml'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    author='Ryu',
    author_email='sfsysryu@gmail.com',
    maintainer='Ryu',
    maintainer_email='sfsysryu@gmail.com',

    keywords=['ROS'],
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Topic :: Software Development',
    ],
    description='ROS 2 rclpy example package for the topic, service, action',
    license='Apache License, Version 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
          'calculator = topic_srv_act_rclpy_ex.topic_subscriber:main',
          'calculator_cli = topic_srv_act_rclpy_ex.client:main',
          'argument = topic_srv_act_rclpy_ex.argument:main',
          'calcurator_action = topic_srv_act_rclpy_ex.cal_act_cli:main'
        ],
    },
)

