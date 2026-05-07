Yuan= int(input("Cuantos yuan te quedan?= "))
Yen= int(input("Cuantos yen te quedan?= "))
Won= int(input("Cuantos won te quedan?= "))

a= Yuan*0.1475
b= Yen*0.0076
c= Won*0.00008

USD = a+b+c
print ("te quedan " + str(USD) + "$")