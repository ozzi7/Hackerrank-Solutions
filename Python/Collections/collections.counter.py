from collections import Counter
n = int(input())
myList = map(int,input().split())
counter = Counter(myList)
sum = 0
for i in range(0, int(input())):
    size,payment = map(int,input().split())
    if(counter[size] > 0):
        counter.subtract({size: 1})
        sum += payment
print(sum)