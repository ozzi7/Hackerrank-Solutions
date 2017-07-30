if __name__ == '__main__':
    N = int(raw_input())

    list = []
    for i in range(1,N+1,1):
        str = raw_input()
        arr = str.split()

        if arr[0] == "insert":
            list.insert(int(arr[1]),int(arr[2]))
        elif arr[0] == "print":
            print(list)
        if arr[0] == "remove":
            list.remove(int(arr[1]))
        elif arr[0] == "append":
            list.append(int(arr[1]))
        if arr[0] == "sort":
            list.sort()
        elif arr[0] == "pop":
            list.pop()
        elif arr[0] == "reverse":
            list.reverse()