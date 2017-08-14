def person_lister(f):
    def inner(people):
        people = sorted(people, key = lambda x: int(x[2]))
        return map(f,people)
    return inner