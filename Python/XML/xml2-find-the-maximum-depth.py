maxdepth = 0
def depth(elem, level):
    global maxdepth
    maxdepth = max(maxdepth, level+1)
    for c in elem:
        depth(c,level+1)
