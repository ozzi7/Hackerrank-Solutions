if __name__ == '__main__':
    nofa = int(input())
    sa = set(map(int, input().split())) 
    nofq = int(input())

    for i in range(0,nofq,1):
        l = input().split()
        sb = set(map(int, input().split()))
        if l[0] == "intersection_update":
            sa.intersection_update(sb)
        elif l[0]  == "update":
            sa.update(sb)
        elif l[0]  == "symmetric_difference_update":
            sa.symmetric_difference_update(sb)
        elif l[0]  == "difference_update":
            sa.difference_update(sb)
    print(sum(sa))