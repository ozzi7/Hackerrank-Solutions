n = int(input())
for i in range(n):
    try:
        l = list(map(int,list(input().split())))
        print(l[0]//l[1])
    except ZeroDivisionError as e:
        print("Error Code:",e)
    except ValueError as e:
        print("Error Code:", e)