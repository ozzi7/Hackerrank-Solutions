#!/bin/python3

import sys
import string

h = list(map(int, input().strip().split(' ')))
word = input().strip()
indices = list(map(string.ascii_lowercase.index, word))
sizes = [val for (index,val) in enumerate(h) if index in indices]
print(len(word)*max(sizes))