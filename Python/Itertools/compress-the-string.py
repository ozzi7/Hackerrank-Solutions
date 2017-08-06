from itertools import groupby

s = [list(g) for k, g in groupby(str(input()))]
for x in s:
    print("("+str(len(x))+", "+x[0]+")",end=" ")