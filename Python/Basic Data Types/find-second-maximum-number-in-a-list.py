if __name__ == '__main__':
    n = int(input())
    list = list(map(int, input().split()))
    list = [y for y in list if y != max(list)]
    print(max(list))
