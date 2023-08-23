import math

maximum = math.inf
minimum = math.inf

while True:
    input = int(input("Enter a number: "))

    if input == "done":
        break
    if len(input) < 1:
        break

    try:
        num = int(input)
    except:
        print ("Invalid input")
        continue

    if minimum is None:
        minimum = num
        maximum = num
    elif num > maximum:
        maximum = num
    elif num < minimum:
        minimum = num

print ("Maximum is", maximum)
print ("Minimum is", minimum)
