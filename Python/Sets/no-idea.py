if __name__ == '__main__':
    nm = list(map(int, input().split()))
    l = list(map(int, input().split()))
    a = set(map(int, input().split()))
    b = set(map(int, input().split()))
    sum = 0
    for i in range(0,len(l),1):
        if l[i] in a:
            sum += 1
        if l[i] in b:
            sum -= 1
    print(sum)