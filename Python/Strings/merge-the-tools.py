import textwrap
def merge_the_tools(string, k):
    l = textwrap.wrap(string, k)
    for i in range(0,len(l),1):
        myset = set()
        toprint = ""
        for j in range(0,len(l[i]),1):
            if l[i][j] not in myset:
                myset.add(l[i][j])
                toprint += l[i][j]
        print(toprint)
        
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)