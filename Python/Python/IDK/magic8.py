
Question = input("Only question of yes or not: ")

import random
mb8 = random.randint(1,9)

if mb8==1:
  answer = ("Yes - definitely.")
elif mb8==2:
  answer = ("It is decidedly so.")
elif mb8==3:
  answer = ("Without a doubt.")
elif mb8==4:
  answer = ("Reply hazy, try again.")
elif mb8==5:
  answer = ("Ask again later.")
elif mb8==6:
  answer = ("Better not tell you now.")
elif mb8==7: 
  answer = ("My sources say no.")
elif mb8==8:
  answer = ("Outlook not so good.")
elif mb8==9:
  answer = ("Very doubtful.")
else:
  answer = ("error")

print ("Question:     " + Question)
print ("Magic 8 ball: " + answer)