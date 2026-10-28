# Assignment 3 - Adventure Game Characters Management System
from abc import ABC, abstractmethod


class Weapon:
    def __init__(self, name, damage):
        self.name = name
        self.damage = damage


class Armor:
    def __init__(self, name, defense):
        self.name = name
        self.defense = defense


class Character(ABC):
    def __init__(self, name, level, health, weapon, armor):
        self.name = name
        self.level = level
        self.health = health
        self.weapon = weapon  # composition: the character owns its equipment
        self.armor = armor

    @abstractmethod
    def attack(self):
        pass

    @abstractmethod
    def defend(self):
        pass

    @staticmethod
    def calculate_power_boost(level, base_power):
        return base_power + level * 5

    def show_info(self):
        print(f"Name: {self.name} | Level: {self.level} | Health: {self.health}")
        print(f"   Weapon: {self.weapon.name} (damage {self.weapon.damage})")
        print(f"   Armor : {self.armor.name} (defense {self.armor.defense})")


class Warrior(Character):
    character_count = 0

    def __init__(self, name, level, health):
        super().__init__(name, level, health, Weapon("Sword", 30), Armor("Iron Armor", 20))
        Warrior.character_count += 1

    def attack(self):
        print(f"{self.name} attacks with a {self.weapon.name}!")

    def defend(self):
        print(f"{self.name} defends with {self.armor.name}!")

    @classmethod
    def get_count(cls):
        return cls.character_count


class Mage(Character):
    character_count = 0

    def __init__(self, name, level, health):
        super().__init__(name, level, health, Weapon("Magic Staff", 40), Armor("Magic Shield", 15))
        Mage.character_count += 1

    def attack(self):
        print(f"{self.name} attacks with magic using a {self.weapon.name}!")

    def defend(self):
        print(f"{self.name} defends with a {self.armor.name}!")

    @classmethod
    def get_count(cls):
        return cls.character_count


class Archer(Character):
    character_count = 0

    def __init__(self, name, level, health):
        super().__init__(name, level, health, Weapon("Bow", 25), Armor("Light Cloak", 10))
        Archer.character_count += 1

    def attack(self):
        print(f"{self.name} shoots arrows with a {self.weapon.name}!")

    def defend(self):
        print(f"{self.name} dodges using agility!")

    @classmethod
    def get_count(cls):
        return cls.character_count


# aggregation: the team holds characters that exist on their own
class Team:
    def __init__(self, team_name):
        self.team_name = team_name
        self.members = []

    def add_member(self, character):
        self.members.append(character)

    def show_team(self):
        print(f"\nTeam: {self.team_name}")
        for member in self.members:
            print(f" - {member.name} ({type(member).__name__})")


# test
warrior = Warrior("Khaled", 5, 120)
mage = Mage("Layla", 4, 80)
archer = Archer("Omar", 3, 90)
characters = [warrior, mage, archer]

print("=== Character Info ===")
for c in characters:
    c.show_info()

# polymorphism: same method, different behavior
print("\n=== Attack and Defend ===")
for c in characters:
    c.attack()
    c.defend()

print("\n=== Character counts ===")
print("Warriors:", Warrior.get_count())
print("Mages   :", Mage.get_count())
print("Archers :", Archer.get_count())

print("\n=== Power boosts ===")
for c in characters:
    print(f"{c.name}: {Character.calculate_power_boost(c.level, c.weapon.damage)}")

team = Team("Dragon Slayers")
for c in characters:
    team.add_member(c)
team.show_team()
