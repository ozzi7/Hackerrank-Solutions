def swap_case(s):
    result = ""
    for i in range(0,len(s),1):
        if s[i].islower():
            result = result + s[i].upper()
        else:
            result = result + s[i].lower()
    return result

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)