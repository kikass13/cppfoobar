#!/usr/bin/env python

####################################################
### WORKAROUND FROM:
### https://github.com/googleapis/oauth2client/issues/642
import sys
if not hasattr(sys, 'argv'):
	sys.argv  = ['']
####################################################



import time 
import sys

print("I am a module ... ")

####################################################

def doStuff():
	print("doStuff() did something! ... :)")
	return 7

####################################################


import rospy
from std_msgs.msg import String

class Node(object):
	def __init__(self, nodename):
		super(Node, self).__init__()
		self.nodename = nodename
		rospy.init_node(nodename, anonymous=True)
		rospy.Subscriber("stuff", String, self.callback)

	def run(self,):
		print("Spinning ROS? ... ")
		rospy.spin()

	def callback(self, data):
		rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)



instance_ = None

### start a rosnode???
def doRosStuff():
	global instance_
	instance_.run()

def doRosInit():
	global instance_
	if(not instance_):
		instance_ = Node("listener")
	else:
		pass
	return True
	


