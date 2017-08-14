def get_attr_number(node):
    sumy = 0
    for c in node:
        sumy += get_attr_number(c)
    return len(node.attrib)+sumy