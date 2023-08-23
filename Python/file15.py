def sum():
    sum = 0
    a = int(input("Enter a number: "))
    b = int(input("Enter another number: "))
    if b>a:
        for i in range(a,b+1 ):
            sum+=i
        print(sum)
    else:
        print("The order must be ascending please")

sum()
