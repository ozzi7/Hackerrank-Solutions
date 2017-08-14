import re
for i in range(int(input())):
    m = re.match('^[789]{1}[0-9]{9}$', input())
    if m:
        print("YES")
    else:
        print("NO")