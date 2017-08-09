from collections import defaultdict
n,m = map(int,input().split())
l = [input() for _ in range(n)]
ddic = defaultdict(list)
for i in range(0,len(l)):
    ddic[l[i]].append(i+1)
for i in range(0,m):
    query = input()
    print(" ".join(repr(e) for e in ddic[query]) or -1)