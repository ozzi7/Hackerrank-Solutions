import re
for i in range(int(input())):
    s = input().strip()
    m1 = re.search(r'(?=(.*[A-Z]){2})', s)
    m2 = re.search(r'(?=(.*\d){3})', s)
    m3 = not re.search(r'[^a-zA-Z0-9]', s)
    m4 = not re.search(r'(.)(.*\1){1}', s)
    m5 = (len(s) == 10)
    if (m1 and m2 and m3 and m4 and m5):
        print("Valid")
    else:
        print("Invalid")