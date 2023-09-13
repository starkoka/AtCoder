import numpy as np
a,b,d=map(int,input().split(" "))
A=np.array([[np.cos(d*np.pi/180),np.sin(d*np.pi/180)*-1],[np.sin(d*np.pi/180),np.cos(d*np.pi/180)]])
B=np.array([a,b])
C=np.dot(A,B)

print(C[0] ,end = " ")
print(C[1])