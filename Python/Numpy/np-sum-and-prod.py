import numpy
n,m = list(map(int,input().split()))
a = list(list())
for _ in range(n):
    a.append(list(map(int,input().split())))
print(numpy.prod(numpy.sum(numpy.array(a),axis=0)))