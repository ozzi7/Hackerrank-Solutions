lc = list(input())
print(*sorted(lc, key=lambda v: (v.isdigit(), not v.isdigit() and v.isupper(), v.isdigit() and int(v)%2 == 0, v)), sep='')