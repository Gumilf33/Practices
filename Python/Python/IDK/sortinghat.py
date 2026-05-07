Gryffindor = 0
Ravenclaw  = 0
Hufflepuff = 0
Slytherin  = 0

print ("Do you like Dawn or dusk?")
print ("   1)Dawn")
print ("   2)Dusk")
Q1 = int(input( ) )
if Q1==1:
   Gryffindor +=1
elif Q1==2:
   Hufflepuff +=1
   Slytherin +=1
else:
   print ("wrong input")

print ("Q2 When I’m dead, I want people to remember me as:")
print ("   1) The Good")
print ("   2) The Great")
print ("   3) The Wise")
print ("   4) The Bold")
Q2 = int(input())
if Q2 == 1:
   Hufflepuff +=1
elif Q2==2:
   Slytherin +=1
elif Q2==3:
   Ravenclaw +=1
elif Q2==4:
   Gryffindor +=1
else:
   print ("wrong input")

print ("Q3) Which kind of instrument most pleases your ear?")
print ("    1) The violin")
print ("    2) The trumpet")
print ("    3) The piano")
print ("    4) The drum")
Q3= int(input())
if Q3==1:
    Slytherin +=1
elif Q3==2:
    Hufflepuff +=1
elif Q3==3:
    Ravenclaw +=1
elif Q3==4:
    Gryffindor +=1
else:
   print ("wrong input")

if Hufflepuff>Slytherin and Hufflepuff>Gryffindor and Hufflepuff>Ravenclaw:
         print ("Hufflepuff")
if Slytherin>Hufflepuff and Slytherin>Gryffindor and Slytherin>Ravenclaw:
         print("Slytherin")
if Gryffindor>Hufflepuff and Gryffindor>Slytherin and Gryffindor>Ravenclaw:
         print ("Gryffindor")
if Ravenclaw>Hufflepuff and Ravenclaw>Slytherin and Ravenclaw>Gryffindor:
         print ("Ravenclaw")

print (f"Hufflepuff {Hufflepuff}")
print (f"Slytherin {Slytherin}") 
print (f"Gryffindor {Gryffindor}")
print (f"Ravenclaw {Ravenclaw}")