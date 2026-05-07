# Prevents a user from creating an object of that class
# + Compels a user to override abstract methods in a child class

# abstract class = a class wich contains one or more abstract methods.
# abstract method = a method that has a declaration but does not have an implementation.

from abc import ABC, abstractmethod

class Vehicle(ABC):

    @abstractmethod
    def go(self):
        pass
    @abstractmethod
    def stop(self):
        pass

class Car(Vehicle):

    def go(self):
        print("You drive the car")
    def stop(self):
        print("You stop the car")

class Motorcicle(Vehicle):
    
    def go(self):
        print ("You ride the morotcycle")
    def stop(self):
        print ("Yout stop the motorcycle")

#vehicle = Vehicle()
car = Car()
motorcicle = Motorcicle()

#vehicle.go()
car.go()
motorcicle.go()
car.stop()
motorcicle.stop()