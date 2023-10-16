import pandas as pd
import matplotlib
import matplotlib.pyplot as plt


ax = plt.figure().add_subplot(projection='3d')

headers = ['x', 'y', 'z', 'label']
df = pd.read_csv('output.csv', names=headers, skipfooter=1) ### skipfooter skips last line, as this is the timing mesurement of the c++ tool
x = df.get("x").values
y = df.get("y").values
z = df.get("z").values
labels = df.get("label").values

colors = ['red','green','blue','purple']


plt.scatter(x, y, z, c=labels, cmap=matplotlib.colors.ListedColormap(colors), marker=".")
plt.show()