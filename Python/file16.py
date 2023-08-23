sum = 0
n = int(input("How many elements you wanna add? "))
print("Enter " , n ," numbers")
for i in range(n):
    ele = int(input())
    sum+=ele

print("The sum of the " , n , " numbers you provided is " , sum)
