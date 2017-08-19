import numpy
a = list(list(map(float,input().split())))
numa = numpy.array(a)
print(numpy.floor(numa))
print(numpy.ceil(numa))
print(numpy.rint(numa))