# Python program to convert Celsius to Fahrenheit using function

def convertTemp(c):  #user-defined function
   # find temperature in Fahrenheit
   f = (c * 1.8) + 32
   return f

# take inputs
cel = float(input('Enter temperature in Celsius: '))

# calling function and display result
fahr = convertTemp(cel)
print('%0.1f degrees Celsius is equivalent to %0.1f
                       degrees Fahrenheit' %(cel, fahr))
