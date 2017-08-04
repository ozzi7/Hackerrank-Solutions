if __name__ == '__main__':
    k = int(input())
    l = list(input().split())
    s = set()
    potentialcaps = set()
    
    for i in range(0,len(l),1):
        if l[i] not in s:
            s.add(l[i])
            potentialcaps.add(l[i])
        else:
            potentialcaps.discard(l[i])
    print(potentialcaps.pop())