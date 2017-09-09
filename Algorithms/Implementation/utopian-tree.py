#!/bin/python3

import sys


t = int(input().strip())
queries = []
for a0 in range(t):
    queries.append(int(input().strip()))
    
sizes = []
sizes.append(1)
for i in range(2,60):
    if(i % 2 == 0):
        sizes.append(sizes[len(sizes)-1]*2)
    else:
        sizes.append(sizes[len(sizes)-1]+1)
for i in range(0,t):
    print(sizes[queries[i]])
        