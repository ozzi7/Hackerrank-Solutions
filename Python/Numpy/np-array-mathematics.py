import numpy

n,m = list(map(int,input().split()))
arrA = list(list())
arrB = list(list())
for _ in range(n):
    arrA.append(list(map(int,input().split())))
for _ in range(n):
    arrB.append(list(map(int,input().split())))
    
a = numpy.array(arrA, int)
b = numpy.array(arrB, int)

print(a + b)
print(a - b)   
print(a * b)   
print(a // b)   
print(a % b)   
print(a ** b)