if __name__ == '__main__':
    l = list(input())
    res = ["False","False","False","False","False"]
    for i in range(0,len(l),1):   
        if l[i].isalnum():
            res[0] = "True"
        if l[i].isalpha():
            res[1] = "True"
        if l[i].isdigit():
            res[2] = "True"
        if l[i].islower():
            res[3] = "True"
        if l[i].isupper():
            res[4] = "True"
    for i in range(0,len(res),1):
        print(res[i])