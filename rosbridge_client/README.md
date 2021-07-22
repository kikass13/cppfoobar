# how to rosbridge with this


### build and run ros_bridge inside docker container

./build_rosbridge_docker.sh

./run_rosbridge_docker.sh 

The docker container will take your current ROS_MASTER_URI and ROS_IP, so configure them in your shell before you run the container

### publish something

publish a random topic 

* rostopic pub /SOMETHING std_msgs/String "data: 'I AM A RANDOM MESSAGE :)'" -r 10

### write rosbridge client (tcp)

build this cpp script

* cmake Cmakelists.txt 

* make 

execute (programm will subscribe to /SOMETHING topic)

* ./rosbridge_client




#### if you want to do it on your own host [DEPRECATED]
install rosbridge suit into your catkin workspace


install rosbridge_suit dependencys

* sudo apt-get install ros-kinetic-rosauth
* pip install bson==0.5.8
* pip install pymongo==3.9.0
* pip install tornado==3.2.1 

clone rosbridge

* git clone https://github.com/RobotWebTools/rosbridge_suite

build rosbridge

* catkin build rosbridge_suite

start rosbridge_suite

* roslaunch rosbridge_server rosbridge_tcp.launch
