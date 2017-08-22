import numpy
n,m,p = input().split()
arr1 = list(list())
for _ in range(int(n)):
    arr1.append(list(map(int,input().split())))
arr2 = list(list())
for _ in range(int(m)):
    arr2.append(list(map(int,input().split())))
    
numarr1 = numpy.array(arr1)
numarr2 = numpy.array(arr2)
print(numpy.concatenate((numarr1, numarr2), axis = 0))
