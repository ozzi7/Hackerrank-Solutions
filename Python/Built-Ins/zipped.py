n,m = map(int,input().split())
ll = list(list())
for i in range(m):
    ll.append(list(map(float,input().split())))
ma = [sum(x) for x in zip(*ll)]
for elem in ma:
    print(elem/m)