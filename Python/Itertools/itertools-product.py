from itertools import product
lista = list(map(int,input().split()))
listb = list(map(int,input().split()))
print(" ".join(list(map(str, product(lista,listb)))))