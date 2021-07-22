docker run -d --net=host --rm rosbridge_docker /bin/bash -c "
	source /catkin_ws/devel/setup.bash; 
	ROS_MASTER_URI=$ROS_MASTER_URI; 
	ROS_IP=$ROS_IP; 
	roslaunch rosbridge_server rosbridge_tcp.launch"
