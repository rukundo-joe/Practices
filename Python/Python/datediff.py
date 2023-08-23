from datetime import date as date_n  
   
def number_of_days(date_1, date_2):  
    return (date_2 - date_1).days  
       
# Driver program  
date_1 = date_n(2023, 9, 10)  
date_2 = date_n(2025, 2, 4)  
print ("Number of Days between the given Dates are: ", number_of_days(date_1, date_2), "days") 