if __name__ == '__main__':
    n = int(input())
    if n % 2 == 1:
        print("Weird")
    elif 2 <= n and n <= 5:
        print("Not Weird")
    elif 6 <= n and n <= 20:
        print("Weird")
    elif n > 20:
        print("Not Weird")