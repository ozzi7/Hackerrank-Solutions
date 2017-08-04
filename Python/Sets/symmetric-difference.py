if __name__ == '__main__':
    n = int(input())
    a = set(map(int, input().split()))
    n = int(input())
    b = set(map(int, input().split()))
    c = a.difference(b)
    d = b.difference(a)
    l = list(c.union(d))
    list(map(print,sorted(l)))