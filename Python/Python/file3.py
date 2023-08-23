# defining function to convert to celsius
def cel(f):
    inC = (f - 32) * 5/9
    print("The celsius conversion is =", inC)
    # print("The %.2f degree Fahrenheit is equal to: %,2f Celsius"%(inC, f))

# defining function to convert to fahrenheit
def fahr(c):
    inF = (c * 9/5) + 32
    print("The fahrenheit conversion is =", inF)
    # print("The %.2f degree Celsius is equal to: %,2f Fahrenheit"%(inF, c))


print("Do you wanna convert the measurements to Celsius or Fahrenheit?")

while True:
    print("\nMENU")
    print("1. Convert to celsius")
    print("2. Convert to fahrenheit")
    print("3. Exit")
    choice = int(input("\nEnter the Choice: "))

# using if-elif-else statement to pick different options
    if choice == 1:
        print( "\n Celsius conversion \n")
        f = float( input("Enter the measurements in Fahrenheit: "))
        Cel = cel(f)

    elif choice == 2:
        print( "\n Fahrenheit conversion \n")
        c = float( input("Enter the measurements in Celsius: "))
        Fahr = fahr(c)


    elif choice == 3:
        break

    else:
        print( "Please Provide a valid Input!")
