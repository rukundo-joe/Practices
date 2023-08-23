sum = 0
i=0
print(end="Enter the Value of n: ")
n = int(input())
print(end="Enter " + str(n) + " Numbers: ")
while i<n:
    num = int(input())
    sum = sum+num
    i = i+1
print("\nSum of " + str(n) + " Numbers = " + str(sum))
