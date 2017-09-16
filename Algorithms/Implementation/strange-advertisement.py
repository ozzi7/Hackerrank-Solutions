#!/bin/python3

import sys

curr = 2
sum = 2
for i in range(2,int(input().strip().split()[0])+1):
    curr = (3*curr) // 2
    sum = sum + curr
print(sum)