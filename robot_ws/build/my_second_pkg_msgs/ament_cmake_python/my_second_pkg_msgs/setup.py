from setuptools import find_packages
from setuptools import setup

setup(
    name='my_second_pkg_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('my_second_pkg_msgs', 'my_second_pkg_msgs.*')),
)
