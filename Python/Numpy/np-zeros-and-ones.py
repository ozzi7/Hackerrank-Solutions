import numpy
dim = tuple(map(int,input().strip().split()))
print(numpy.zeros(dim, dtype = numpy.int))
print(numpy.ones(dim, dtype = numpy.int))