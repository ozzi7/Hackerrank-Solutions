#!/bin/python3

import sys
def divisibleSumPairs(n, k, ar):
    return len([a + b for i, a in enumerate(ar) for j, b in enumerate(ar) if j > i and (a+b) % k == 0])

n, k = input().strip().split(' ')
n, k = [int(n), int(k)]
ar = list(map(int, input().strip().split(' ')))
result = divisibleSumPairs(n, k, ar)
print(result)
