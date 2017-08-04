if __name__ == '__main__':
    nofe = int(input())
    sete = set(map(int, input().split())) 
    noff = int(input())
    setf = set(map(int, input().split())) 

    print(len(sete.intersection(setf)))