from setuptools import find_packages
from setuptools import setup

setup(
    name='msg_srv_act_interface_ex',
    version='0.0.0',
    packages=find_packages(
        include=('msg_srv_act_interface_ex', 'msg_srv_act_interface_ex.*')),
)
