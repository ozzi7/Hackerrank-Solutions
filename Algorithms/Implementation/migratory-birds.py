#!/bin/python3

import sys
from collections import Counter

def migratoryBirds(n, ar):
    l = sorted(Counter(ar).items(), key = lambda x: (-x[1], x[0]))
    return l[0][0]
n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = migratoryBirds(n, ar)
print(result)