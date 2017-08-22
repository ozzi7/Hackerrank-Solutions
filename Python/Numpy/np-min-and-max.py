import numpy
n,m = list(map(int,input().split()))
a = list(list())
for _ in range(n):
    a.append(list(map(int,input().split())))
print(numpy.max(numpy.min(numpy.array(a),axis=1)))
