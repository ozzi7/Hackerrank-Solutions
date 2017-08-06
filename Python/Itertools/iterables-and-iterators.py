import math
n = int(input())
l = list(input().split())
m = int(input())
count = 0
for i in range(0,n):
    if l[i] == 'a':
        count += 1
if(n-count-m >= 0):
    notprob = math.factorial(n-count)/(math.factorial(n-count-m))/(math.factorial(n)/math.factorial(n-m))
else:
    notprob = 0
print(1-notprob)
