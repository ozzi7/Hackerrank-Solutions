from itertools import combinations
text = input().split()
s = text[0]
slist = list(s)
slist.sort()
s = "".join(slist)
k = int(text[1])
for i in range(1,k+1):
    li = list(combinations(s,i))
    for x in li:
        print("".join(x))