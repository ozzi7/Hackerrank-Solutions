import re
def capitalize(string):
    l = re.split(r'(\s+)', string)
    res = l
    for i in range(0,len(l),1):
        res[i] = l[i][0].upper() + l[i][1:]
    return ''.join(res)
