from itertools import permutations
text = input().split()
s = text[0]
k = int(text[1])
li = list(permutations(s,k))
li.sort()
for x in li:
    print("".join(x))