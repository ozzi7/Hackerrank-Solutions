#!/bin/python3

import sys
import itertools

def getMoneySpent(keyboards, drives, s):
    l = list(filter(lambda z : z <= s, [x+y for (x,y) in itertools.product(keyboards,drives)]))
    if(len(l) > 0):
        return max(l)
    else:
        return -1

s,n,m = input().strip().split(' ')
s,n,m = [int(s),int(n),int(m)]
keyboards = list(map(int, input().strip().split(' ')))
drives = list(map(int, input().strip().split(' ')))

moneySpent = getMoneySpent(keyboards, drives, s)
print(moneySpent)
