import numpy
n,m = map(int,input().split())
arr = list(list())
for _ in range(n):
    arr.append(list(map(int,input().split())))
numarr = numpy.array(arr)
print(numpy.transpose(arr))
print(numarr.flatten())
