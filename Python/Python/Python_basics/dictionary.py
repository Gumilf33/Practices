# dictionary =  A changeable, undered collection of unique key: value pairs
#               Fast because they use hashing, allow us to acces a value quickly
#           {"key":"values  "}
capitals = {"USA":"Washington DC",
            "india":"New Dehli",
            "China":"Beijing",
            "Russia":"Moscow"}

capitals.update({"Germany":"Berlin"})
capitals.update({"USA":"Las vegas"})
capitals.pop("China")
#capitals.clear()

print(capitals["Russia"])
print(capitals.get("Germany"))  #busca si hay la variable en la lista
print(capitals.keys())          #escribe todas las keys 
print(capitals.values())        #escribe todos los values posibles
#print(capitals.items())

for key, value in capitals.items():
    print (key,"/", value)