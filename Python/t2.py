import calendar

yearofbirth = int(input("What's your year of birth please? "))
currentyear = int(input("What's the current year please? "))
monthofbirth = int(input("Which month were you born in please?"))

Age = currentyear - yearofbirth

print("You are", Age, "years old")

print("\n")

print(calendar.calendar(yearofbirth))

# import calendar

# year = int(input("Which year should we display please? "))
# # month = int(input("Which month should we display please? "))

# print(calendar.calendar(year))

