if __name__ == '__main__':
    A = set(input().split()) 
    nofsets = int(input())
    res = "True"
    for i in range(0, nofsets,1):
        B = set(input().split())
        if not(B.difference(A) == set() and not(B.intersection(A) == set())):
            res = "False"
    print(res)