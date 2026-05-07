#**kwargs = parameter that will pack all arguments into a dictionary
#           useful so that a function can accept a varying amount of keyword argument

def hello(**names): 
    #print ("Hello " + names["first"] + " " + names["last"])
    print ("Hello",end=" ")
    for key,value in names.items():
        print(value,end=" ")


hello (title= "Mr.", first="Amin", middle="Acuña",last="López")
