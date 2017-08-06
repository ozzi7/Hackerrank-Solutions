from itertools import combinations_with_replacement
s,inp2 = input().split()
slist = list(s)
slist.sort()
s = "".join(slist)
li = list(combinations_with_replacement(s,int(inp2)))
for x in li:
    print("".join(x))