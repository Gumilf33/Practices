# args =    parameter that will pack all arguments into a tuple
#           useful so that a function can accept a varying amount of arguments

def add (*stuff):
    sum = 0 
    stuff = list (stuff) # cambiamos el "stuff" de tuple a lista / ya que un tuple no puede ser cambiado y una lista si
    stuff [0] = 0
    for i in stuff:
        sum +=i
    return sum

print (add(1,2,3))