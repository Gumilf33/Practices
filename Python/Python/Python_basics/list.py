#list = used to store multiple items in a single variable 
food = ["pizza","hamburger","hotdogs","spaghetti","pudding"]

food [0] = "sushi"

food.append("ice cream")    # agrega un elemento al final de la lista
food.remove("hotdogs")      # remueve el elemento indicado de la lista
food.pop()                  # remueve el ultimo elemento de la lista
food.insert (0,"cake")      # agrega en la posicion dicha el elemento 
food.sort()                 # desordena las posiciones de la lista
#food.clear()               # limpia la lista

for x in food:
    print(x)