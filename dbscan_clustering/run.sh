#!/bin/bash

# ./build/dbscan.bin sample2d.csv 0.2 10 > output.csv

./build/dbscan.bin sample3d.csv 0.3 3 > output.csv && python3 plot.py

# ./build/dbscan.bin depth_image_cloud.csv 1 10 > output.csv && python3 plot.py
# ./build/dbscan.bin kitti_cloud.csv 0.1 5 > output.csv && python3 plot.py

### needs ~ the same time as the python wrapper of skicit.learn dbscan




