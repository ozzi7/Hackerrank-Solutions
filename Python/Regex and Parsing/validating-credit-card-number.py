import re
for i in range(int(input())):
    s = input().strip()
    m1 = re.search(r'^([456]{1}[0-9]{3}-[0-9]{4}-[0-9]{4}-[0-9]{4}$)|([456]{1}[0-9]{15}$)', s)
    s = s.replace('-', "")
    m2 = not re.search(r'(.)(\1){3}', s)
    if m1 and m2:
        print("Valid")
    else:
        print("Invalid")