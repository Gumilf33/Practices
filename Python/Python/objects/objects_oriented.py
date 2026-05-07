from car import car

car_1 = car("Chevy","Corvette",2021,"blue")
car_2 = car("Ford","Mustang",2022,"red")

print(car_1.make)
print(car_1.model)
print(car_1.year)
print(car_1.color)
print(car_1.wheels)

car_1.drive()
car_1.stop()