# filter() =    creates a collection of elemnts from an iterable for which a function returns true
#
# filter(function, iterable)

friends = [("Rachel", 19),
           ("Monica", 18),
           ("Phoebe", 17),
           ("Joey", 16),
           ("chandler", 21),
           ("Ross", 20)]

age = lambda data:data[1] >=18

filter(age, friends)

drinking_buddies = list(filter(age, friends))

for i in drinking_buddies:
    print(i)
