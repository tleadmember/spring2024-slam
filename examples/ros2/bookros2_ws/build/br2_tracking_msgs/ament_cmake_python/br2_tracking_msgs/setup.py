from setuptools import find_packages
from setuptools import setup

setup(
    name='br2_tracking_msgs',
    version='0.2.0',
    packages=find_packages(
        include=('br2_tracking_msgs', 'br2_tracking_msgs.*')),
)
