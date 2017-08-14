import re
s = input()
query = input()
m = list(re.finditer(r'(?=('+ query +'))', s))
if m:
    for e in m:
        print((e.start(), e.start()+len(query)-1))
else:
    print((-1,-1))
