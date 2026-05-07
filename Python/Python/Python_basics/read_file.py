
try:
    with open ("C:\\Users\\amina\\OneDrive\\Escritorio\\Python\\Python_basics\\test.txt") as file:
        print (file.read())
except FileNotFoundError:
    print ("That file was not found :(")