from collections import deque
cases = int(input())
for i in range(cases):
    ok = "Yes"
    n = int(input())
    d = deque(map(int,input().split()))
    last = 2**31
    for j in range(n):
        if d[0] > d[-1]:
            if last >= d[0]:
                last = d.popleft()
            else:
                ok = "No"
        else:
            if last >= d[-1]:
                last = d.pop()
            else:
                ok = "No"
    print(ok)