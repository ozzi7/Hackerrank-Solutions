from datetime import datetime
n = int(input())
parser = '%a %d %b %Y %H:%M:%S %z'
for i in range(n):
    a = datetime.strptime(input(), '%a %d %b %Y %H:%M:%S %z')
    b = datetime.strptime(input(), '%a %d %b %Y %H:%M:%S %z')
    print(int(abs((b-a).total_seconds())))