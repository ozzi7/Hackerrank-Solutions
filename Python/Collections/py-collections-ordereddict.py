from collections import OrderedDict
n = int(input())
ordered_dictionary = OrderedDict()
for i in range(n):
    l = input().split()
    if " ".join(l[0:len(l)-1]) not in ordered_dictionary:
        ordered_dictionary[" ".join(l[0:len(l) - 1])] = int(l[len(l)-1])
    else:
        ordered_dictionary[" ".join(l[0:len(l) - 1])] = ordered_dictionary[" ".join(l[0:len(l) - 1])] + int(l[len(l) - 1])
for k,v in ordered_dictionary.items():
    print(k,v)