#!/bin/python3

import sys
from itertools import groupby

s = sys.stdin.read().strip()
sentences = s.split(".")
triplets = []
for i in range(len(sentences)-1):
    words = sentences[i].split()
    triplets.extend([(x,y,z) for (xi,x) in enumerate(words)
              for (yi, y) in enumerate(words)
              for (zi,z) in enumerate(words)
              if xi+1 == yi and yi+1 == zi])
occs = [(i, triplets.count(i)) for i,_ in groupby(triplets)]
max = 0
ties = 0
res = ""
for i in range(len(occs)):
    if occs[i][1] > max:
        max = occs[i][1]
        res = " ".join(occs[i][0])
print(res.lower())
    