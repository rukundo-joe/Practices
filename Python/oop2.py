class Person:
  def __init__(self, name, age):
    self.name = input("Enter your name please: ")
    self.age = int(input("What's your age please? "))

  def myfunc(self):
    print("Hello my name is " + self.name, "and i'm ",self.age,"years old")

p1 = Person("John", 36)
p1.myfunc()