import email.utils
import re
for i in range(int(input())):
    s = input()
    ps = email.utils.parseaddr(s)
    if re.match("[a-z|A-Z|0-9][a-z|A-Z|0-9|.|\-|_]*@[a-zA-Z]+\.[a-zA-Z]{1,3}$",ps[1]):
        print(email.utils.formataddr(ps))