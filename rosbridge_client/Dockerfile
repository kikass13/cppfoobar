FROM ros:kinetic

RUN apt-get update
RUN apt-get -y install git nano python-pip ros-kinetic-rosauth python-catkin-tools python-imaging
RUN pip install bson==0.5.8 pymongo==3.9.0 tornado==3.2.1 twisted

RUN mkdir -p /catkin_ws/src/
RUN git clone https://github.com/RobotWebTools/rosbridge_suite /catkin_ws/src/rosbridge_suite
WORKDIR /catkin_ws
RUN . /opt/ros/kinetic/setup.sh; catkin build
WORKDIR /