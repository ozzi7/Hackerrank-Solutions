def print_formatted(number):
    width = len(str(bin(number).split('b')[-1])) + 1
    for i in range(1, n + 1, 1):
        print((str(i)).rjust(width-1,' ') +
        (str(oct(i).split('o')[-1])).rjust(width,' ') +
        ((str(hex(i).split('x')[-1])).upper()).rjust(width,' ') +
        (str(bin(i).split('b')[-1])).rjust(width,' '))