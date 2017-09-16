#!/bin/python3

import sys

q = int(input().strip())
for a0 in range(q):
    x,y,z = input().strip().split(' ')
    x,y,z = [int(x),int(y),int(z)]
    if(x == y or (abs(z-x) == abs(z-y))):
        print("Mouse C")
    elif(abs(z-x) < abs(z-y)):
        print("Cat A")
    else:
        print("Cat B")