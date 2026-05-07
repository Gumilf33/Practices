# Higher Order Function =   a function that either:
#                           1. accepts a function as an argument
#                               or
#                           2. returns a function
#                           (In python, functions are also treated as objects)

#def loud(text):
#    return text.upper()

#def quiet(text):
#    return text.lower()

#def hello(func):
#    text = func ("Hello")
#    print(text)

#hello(loud)
#hello(quiet)


#def divisor(x):
#    def dividend(y):
#        return y / x
#    return dividend

#divide = divisor(2)
#print(divide(20))  

def apply_function_to_list(func, num_list):
    result = []
    for num in num_list:
        result.append(func(num))
    return result

def square(x):
    return x * x 

def cube(x):
    return x * x * x 

numbers = [1, 2, 3, 4, 5]

squared_numbers = apply_function_to_list(square, numbers)
cubed_numbers = apply_function_to_list(cube, numbers)

print (squared_numbers)
print (cubed_numbers)