import re
for i in range(int(input())):
    print(bool(re.match("^[-+]{0,1}[0-9]*[.][0-9]+$",input())))