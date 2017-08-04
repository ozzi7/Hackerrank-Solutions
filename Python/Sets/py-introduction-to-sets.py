def average(array):
    myset = set()
    sum = 0.0
    for i in range(0,len(array),1):
        if array[i] not in myset:
            myset.add(array[i])
            sum += array[i] 
    return sum/len(myset)