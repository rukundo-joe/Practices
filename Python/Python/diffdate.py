# Python3 program to find number of days
# between two given dates
from datetime import date
 
def numOfDays(date1, date2):
    return (date2-date1).days
     
# Driver program
date1 = date(2023, 3, 3)
date2 = date(2023, 8, 4)
print("We've got", numOfDays(date1, date2), "days")