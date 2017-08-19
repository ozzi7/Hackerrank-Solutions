import numpy
n,m = list(map(int,input().split()))
a = list(list())
for _ in range(n):
    a.append(list(map(int,input().split())))
print(numpy.mean(numpy.array(a),axis=1))
print(numpy.var(numpy.array(a),axis=0))
print(numpy.std(numpy.array(a)))
