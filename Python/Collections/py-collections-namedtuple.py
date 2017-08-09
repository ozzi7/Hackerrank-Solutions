from collections import namedtuple
n = int(input())
Student = namedtuple('Student', input().split())
sum = 0
for i in range(0,n):
    l = input().split()
    study = Student(l[0],l[1],l[2],l[3])
    sum += int(study.MARKS)
print(sum/n)