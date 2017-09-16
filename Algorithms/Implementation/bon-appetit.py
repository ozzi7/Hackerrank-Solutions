#!/bin/python3

import sys

def bonAppetit(n, k, b, ar):
    if((sum(ar) - ar[k])/2 == b):
        return "Bon Appetit"
    else:
        return b -(sum(ar) - ar[k])//2
        
n, k = input().strip().split(' ')
n, k = [int(n), int(k)]
ar = list(map(int, input().strip().split(' ')))
b = int(input().strip())
result = bonAppetit(n, k, b, ar)
print(result)
