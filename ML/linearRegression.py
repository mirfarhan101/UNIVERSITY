import numpy as np

student = [["s1","s2","s3","s4","s5","s6"],
           [2,4,5,7,8,10],
           [50,55,56,62,66,72]]
meanX, meanY = 0, 0

for i in range(6):
    meanX += student[1][i]
meanX = meanX/6

for i in range(6):
    meanY += student[2][i]
meanY = meanY/6

SxX, SxY = 0,0

for i in range(6):
    SxX += (student[1][i] - meanX)**2

for i in range(6):
    SxY += (student[1][i] - meanX)*(student[2][i] - meanY)

#equation == y = B0 + BiXi + E

X = 0.0

Bi = SxY / SxX

B0 = meanY - Bi * meanX 

X= float(input("Enter the X "))

Y = B0 + Bi*X

print(Y)