if __name__ == '__main__':
    n = int(input())
    myset = set()
    for i in range(0,n,1):
        myset.add(str(input()))
    print(len(myset))