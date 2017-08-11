from collections import Counter
c = Counter(raw_input())
li = c.most_common(3)
if li[0][1] == li[1][1] and li[1][1] == li[2][1]:
    li.sort()
elif li[0][1] == li[1][1] and li[0][0] > li[1][0]:
    li[0], li[1] = li[1], li[0]
elif li[1][1] == li[2][1] and li[1][0] > li[2][0]:
    li[1], li[2] = li[2], li[1]
for i in li:
    print(i[0] + " " + str(i[1]))