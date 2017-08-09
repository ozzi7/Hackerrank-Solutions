import re
n = int(input())
for i in range(n):
    try:
        re.compile(input())
    except Exception:
        print("False")
    else:
        print("True")