#!/bin/python3

import sys
from collections import Counter

def sockMerchant(n, ar):
    d = list(Counter(ar).items())
    return sum([y//2 for (x,y) in d ])
    return d
n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = sockMerchant(n, ar)
print(result)
