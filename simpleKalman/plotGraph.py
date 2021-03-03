#!/usr/bin/python3

import matplotlib.pyplot as plt
import csv
import sys

data_1 = []
data_2 = []
csvPath = sys.argv[1]
with open(csvPath) as csv_file:
    csv_reader = csv.reader(csv_file, delimiter=';')
    ### skip first line (header)
    next(csv_reader)
    for i, row in enumerate(csv_reader):
        measurement, state = row
        data_1.append(float(measurement))
        data_2.append(float(state))
        

plt.plot(data_1, 'b-')
plt.plot(data_2, 'r-')
plt.ylabel('some kalman stuff')
plt.show()