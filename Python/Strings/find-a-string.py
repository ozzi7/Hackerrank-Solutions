def count_substring(string, sub_string):
    stringMatches = 0
    for i in range(0, len(string)):
        letterMatches = 0
        for j in range(0, len(sub_string)):
            if(i+j < len(string) and string[i+j] == sub_string[j]):
                letterMatches = letterMatches + 1
            else:
                break
        if letterMatches == len(sub_string):
            stringMatches = stringMatches + 1
    return stringMatches

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)