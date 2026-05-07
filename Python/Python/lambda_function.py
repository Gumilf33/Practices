# lambda function = function written in 1 line using lamda keyword
#                   accepts any number of arguments, but only has one expression.
#                   (thing of it as a shortcut)
#                   (useful if needed for a shor period of time, throw-away)
#
# lamba parameters:expreession

#def double(x):
#    return x * 2

#print(double(5))

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

double = lambda x : x * 2
multiply = lambda x, y: x * y
add = lambda x, y, z: x + y + z
full_name = lambda first_name, last_name: first_name + " " + last_name
age_check = lambda age:True if age >= 18 else False
filtered_numbers = list(filter(lambda x: x % 2 == 0, numbers))

print(double(5))
print(multiply(5,6))
print(add(1,2,3))
print(full_name("Amin", "Acuña"))
print(age_check(19))
print(filtered_numbers)