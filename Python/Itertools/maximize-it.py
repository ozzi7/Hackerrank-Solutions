import itertools
k, m = map(int, input().split())
sums = (sum(j) % m for j in itertools.product(*((int(i) ** 2 for i in input().split()[1:]) for z in range(k))))
print(max(sums))