import re
for i in range(int(input())):
    m = re.findall('[^\n]#[a-fA-F0-9]{6}|[^\n]#[a-fA-F0-9]{3}', input())
    for e in m:
        print(e[1:])