class Dog:
    # A constructor to initialize attributes
    def __init__(self, name, breed):
        self.name = name
        self.breed = breed

    # A method representing behavior
    def bark(self):
        return f"{self.name} says Woof!"

# Creating an instance (object) of the class
my_dog = Dog("Buddy", "Golden Retriever")
print(my_dog.bark()) 
