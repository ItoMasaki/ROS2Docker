#!/usr/bin/env python
from setuptools import setup
from setuptools import find_packages

package_name = 'turtlebot4_flexbe_states'

setup(
    name=package_name,
    version='1.3.1',
    packages=find_packages(),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='phil',
    maintainer_email='philsplus@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'example_action_state = turtlebot4_flexbe_states.example_action_state',
            'example_state = turtlebot4_flexbe_states.example_state',
        ],
    },
)
