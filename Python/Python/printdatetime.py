from datetime import datetime


year = int(input('Enter a year: '))
month = int(input('Enter a month: '))
day = int(input('Enter a day: '))

hours = int(input('Enter the hour: '))
minutes = int(input('Enter the minutes: '))
seconds = int(input('Enter the seconds: '))

dt = datetime(year, month, day, hours, minutes, seconds)

print(dt)