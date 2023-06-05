





class vehicle:
    pass
for name in vehicle.__dict__:
    print(name)

import array
for name in array.__dict__:
    print(name)




class vehicle:
    def __init__(self,name,seating_capacity):
        self.name=name
        self.seating_capacity= seating_capacity
    def method(self):
        if self.name=="BRT":
            print("fare charge for Bus:",((10/100)*self.seating_capacity*100)+self.seating_capacity*100)
        else:
            print("fare charge for Car:",self.seating_capacity*100)


class Bus(vehicle):
        pass
class car(vehicle):
        pass
BMW=car("BMW",20)
BRT=Bus("BRT",20)
BMW.method()
BRT.method()













class vehicle:
    color="white"
    def __init__(self,name,max_speed,mileage):
        self.name=name
        self.max_speed=max_speed
        self.mileage=mileage
    def method(self):
        print("name of vehicle",self.name,"color of vehicle",self.color)
class Bus(vehicle):
    pass
class car(vehicle):
    pass

BMW=car("BMW",300,400)
BRT=Bus("BRT",250,300)
BMW.method()
BRT.method()






class vehicle:
    def __init__(self,name,max_speed,mileage):
        self.name=name
        self.max_speed=max_speed
        self.mileage=mileage
    def seating_capacity(self,capacity=50):
        return f"The seating capacity of a {self.name} is {capacity} passengers"
class Bus(vehicle):
    pass
BMW=Bus("BMW",350,400)

x=BMW.seating_capacity()
print(x)






class vehicle:
    def __init__(self,name,max_speed,mileage):
        self.name=name
        self.max_speed=max_speed
        self.mileage=mileage

    def method(self):
        print("name:",self.name,"\n","max_speed:",self.max_speed,"km/hr","\n","mileage:",self.mileage,"km")
BMW=vehicle("BMW",350,400)
TOYOTA=vehicle("TOYOTA",300,350)
BMW.method()
TOYOTA.method()















k=0
for i in range(2):
    x=input("name:")
    y=input("middle_name:")
    z=input("last_name:")
    a=int(input("age:"))






    class bio():
        def __init__(self):
            self.name=x
            self.middle_name=y
            self.last_name=z
            self.age=a
        def config(self):
            print("name:",self.name,"\n","middle_name:",self.middle_name,"\n","last_name:",self.last_name,"\n","age:",self.age)

    user1=bio()
    user1.config()
    k+=1

from numpy import *
arr=([])
arr.append



