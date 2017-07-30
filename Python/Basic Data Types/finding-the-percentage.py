def printC(answer):
    print ("{:0.2f}".format(answer))
    
if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    printC(sum(student_marks[query_name])/float(len(student_marks[query_name])))
