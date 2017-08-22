import numpy
A = list(map(int,input().split()))
B = list(map(int,input().split()))
nA = numpy.array(A)
nB = numpy.array(B)
print(numpy.dot(A,B))
print(numpy.outer(A,B))