import re
def replace(match):
    if match.group(2) == "&&":
        return " and "
    elif match.group(2) == "||":
        return " or "
for i in range(int(input())):
    s = re.sub(r"( ){1}(\|\||&&){1}( ){1}", replace, input())
    print(re.sub(r"( ){1}(\|\||&&){1}( ){1}", replace, s))