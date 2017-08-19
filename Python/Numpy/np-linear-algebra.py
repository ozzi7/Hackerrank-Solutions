import numpy
n = int(input())
A = list(list())
for _ in range(n):
    A.append(list(map(float,input().split())))
print(numpy.linalg.det(numpy.array(A)))