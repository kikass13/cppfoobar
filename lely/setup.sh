#!/bin/bash


LD_LIBRARY_PATH=/usr/local/lib
ldconfig

sudo modprobe vcan
sudo ip link add dev vcan0 type vcan
sudo ip link set vcan0 txqueuelen 1000
sudo ip link set vcan0 up