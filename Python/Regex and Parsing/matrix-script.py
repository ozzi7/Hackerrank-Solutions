import re
n,m = map(int, input().split())
l = []
for i in range(n):
    l.append(list(input()))
    for j in range(len(l[i]),m):
        l[i].append(" ")
s = "".join(map("".join, zip(*l)))
ma = re.findall(r'[a-zA-Z]{1}([^a-zA-Z]{1,})[a-zA-Z]{1}',s)
for e in ma:
    s = s.replace(e, " ",1)
print(s)