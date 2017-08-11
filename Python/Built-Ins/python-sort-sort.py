n, m = map(int, input().split())
l = list()
for i in range(n):
    l.append(input())
k = int(input())
for row in sorted(l, key = lambda row: int(row.split()[k])):
    print(row)