import datetime, calendar, time

currentYear = datetime.datetime.now().year
currentTime = datetime.datetime.now()
birthYear = int(input("When were you born please? "))
birthMonth = int(input("What's your birth month please? "))
time_now = time.ctime()

Age = currentYear - birthYear

print("\n")
print(calendar.month(birthYear, birthMonth))
print("\n")
# print(currentTime)
print(time_now)
print("\n")
print("You are", Age, "years old!")


# for i in range(0,20, +2):
# 	print(i)
