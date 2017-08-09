from collections import deque
n = int(input())
d = deque()
for i in range(n):
    l = input().split()
    if l[0] == "append":
        d.append(l[1])
    elif l[0]== "appendleft":
        d.appendleft(l[1])
    elif l[0] == "pop":
        d.pop()
    elif l[0] == "popleft":
        d.popleft()
l = list(d)
for elem in d:
    print(elem, end=' ')