guess = 0
tries=1
while guess != 6 and tries < 5:
  guess = int(input('Guess the number: '))
  tries= tries+1

if guess != 6:
  print ("te quedaste sin intentos")
else:
  print ("entraste wacho")