#!/bin/python3

import sys

a = [int(a_temp) for a_temp in input().strip().split(' ')]
days = [d for d in range(a[0],a[1]+1)]
res = [d for d in days if (d - int(str(d)[::-1])) % a[2] == 0]
print(len(res))