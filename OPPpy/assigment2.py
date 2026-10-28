# Assignment 2 - Vehicle System

class Vehicle:
    def __init__(self, brand, color, price):
        self.brand = brand
        self.color = color
        self._price = price  # protected

    def get_price(self):
        return self._price

    # negative prices are rejected
    def set_price(self, amount):
        if amount < 0:
            print("Invalid price! It can't be negative.")
        else:
            self._price = amount
            print(f"Price updated to {amount}")

    def show_info(self):
        print(f"Vehicle -> Brand: {self.brand}, Color: {self.color}, Price: {self._price}")


# Car, Bus and Motorcycle all inherit from Vehicle
class Car(Vehicle):
    def __init__(self, brand, color, price, doors):
        super().__init__(brand, color, price)
        self.doors = doors

    def show_info(self):
        print(f"Car -> Brand: {self.brand}, Color: {self.color}, "
              f"Price: {self._price}, Doors: {self.doors}")


class Bus(Vehicle):
    def __init__(self, brand, color, price, seats):
        super().__init__(brand, color, price)
        self.seats = seats

    def show_info(self):
        print(f"Bus -> Brand: {self.brand}, Color: {self.color}, "
              f"Price: {self._price}, Seats: {self.seats}")


class Motorcycle(Vehicle):
    def __init__(self, brand, color, price, engine_cc):
        super().__init__(brand, color, price)
        self.engine_cc = engine_cc

    def show_info(self):
        print(f"Motorcycle -> Brand: {self.brand}, Color: {self.color}, "
              f"Price: {self._price}, Engine: {self.engine_cc}cc")


# multilevel: Vehicle -> Car -> SportsCar
class SportsCar(Car):
    def __init__(self, brand, color, price, doors, max_speed):
        super().__init__(brand, color, price, doors)
        self.max_speed = max_speed

    def show_info(self):
        print(f"SportsCar -> Brand: {self.brand}, Color: {self.color}, "
              f"Price: {self._price}, Doors: {self.doors}, Max speed: {self.max_speed} km/h")


class ElectricMixin:
    def __init__(self, battery_capacity):
        self.battery_capacity = battery_capacity

    def charge(self):
        print(f"Charging the {self.battery_capacity} kWh battery...")


# multiple inheritance: Car + ElectricMixin
class ElectricCar(Car, ElectricMixin):
    def __init__(self, brand, color, price, doors, battery_capacity):
        Car.__init__(self, brand, color, price, doors)
        ElectricMixin.__init__(self, battery_capacity)

    def show_info(self):
        print(f"ElectricCar -> Brand: {self.brand}, Color: {self.color}, "
              f"Price: {self._price}, Doors: {self.doors}, "
              f"Battery: {self.battery_capacity} kWh")


# test
car = Car("Toyota", "White", 20000, 4)
bus = Bus("Mercedes", "Yellow", 90000, 50)
bike = Motorcycle("Yamaha", "Black", 5000, 250)
sports = SportsCar("Ferrari", "Red", 250000, 2, 340)
tesla = ElectricCar("Tesla", "Blue", 45000, 4, 75)

# same method, different output for each class
for v in [car, bus, bike, sports, tesla]:
    v.show_info()

print("\n--- Testing set_price ---")
car.set_price(22000)
car.set_price(-500)
print("Current price:", car.get_price())

print("\n--- Electric features ---")
tesla.charge()
