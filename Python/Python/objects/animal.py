class Animal:

    alive = True

    def eat(self):
        print ("This animal is eating")
    
    def sleep(self):
        print ("This animal is sleeping")
    
class Rabbit(Animal):
    
    def run(self):
        print ("This rabbit is runin")

class Fish(Animal):

    def swim(self):
        print ("This fish es swimin")

class Hawk(Animal):
    
    def fly(self):
        print ("This Hawk is flyiiiin")



rabbit = Rabbit()
fish = Fish()
hawk = Hawk()


#print (rabbit.alive)
#fish.eat()
#hawk.sleep()


rabbit.run()
fish.swim()
hawk.fly()