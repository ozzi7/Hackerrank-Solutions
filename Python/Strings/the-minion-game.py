def minion_game(string):
    length = len(string)
    countKevin = 0
    countStuart = 0
    for i in range(len(string)):
        if s[i] in "AEIOU":
            countKevin += (len(string)-i)
        else:
            countStuart += (len(string)-i)
    if countStuart > countKevin:
        print("Stuart " + str(countStuart))
    elif countKevin > countStuart:
        print("Kevin " + str(countKevin))
    else:
        print("Draw")
        
if __name__ == '__main__':
    s = input()
    minion_game(s)