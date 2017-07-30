if __name__ == '__main__':
    list = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        list.append([name,score])
    list = [[x,y] for [x,y] in list if y != min([u for [z,u] in list])]
    list = [[x,y] for [x,y] in list if y == min([u for [z,u] in list])]
    list.sort(key=lambda x: x[0])
    for [x,y] in list:
        print(x)