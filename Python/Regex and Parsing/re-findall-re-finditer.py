import re
m = re.findall(r'(?=([QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm +-]{1}'
               r'[AEIOUaeiou]{2,}'
               r'[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm +-]{1}))',input())
if m:
    for elem in m:
        print(elem[1:-1])
else:
    print(-1)