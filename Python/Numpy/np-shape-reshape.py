import numpy
arr = list(map(int,input().split()))
numarr = numpy.array(arr)
print(numpy.reshape(numarr,(3,3)))