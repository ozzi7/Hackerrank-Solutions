n = input()
l = list(map(int, input().split()))
print(all(map(lambda x: x > 0, l)) and any(map(lambda x:str(x) == str(x)[::-1], l)))