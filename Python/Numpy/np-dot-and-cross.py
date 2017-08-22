import numpy
n = int(input())
A = list(list())
for _ in range(n):
    A.append(list(map(int,input().split())))
B = list(list())
for _ in range(n):
    B.append(list(map(int,input().split())))
nA = numpy.array(A)
nB = numpy.array(B)
print(numpy.dot(A,B))