from setuptools import find_packages, setup

package_name = 'my_timer_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'timer_publisher = my_timer_pkg.timer_publisher:main',
            'timer_subscriber = my_timer_pkg.timer_subscriber:main',
        ],
    },
)
