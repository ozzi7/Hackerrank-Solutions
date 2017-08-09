from collections import OrderedDict
n = int(input())
ordered_dictionary = OrderedDict()
for i in range(n):
    inp = input()
    if inp not in ordered_dictionary:
        ordered_dictionary[inp] = 1
    else:
        ordered_dictionary[inp] = ordered_dictionary[inp] + 1
print(ordered_dictionary.__len__())
for k,v in ordered_dictionary.items():
    print(v, end= " ")