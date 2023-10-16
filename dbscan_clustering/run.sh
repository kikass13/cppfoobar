#!/bin/bash

# ./build/dbscan.bin sample2d.csv 0.2 10 > output.csv

./build/dbscan.bin sample3d.csv 1 10 > output.csv && python3 plot.py

# ./build/dbscan.bin 3d_pointcloud_kitti.csv 1 10 > output.csv && python3 plot.py
### needs ~ the same time as the python wrapper of skicit.learn dbscan




