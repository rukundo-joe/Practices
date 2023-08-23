N = int(input("Enter a number: "))
s = 0
while N >= 0:
    s = s + N
    N = N - 1
print("The sum of the first ", N, "natural numbers is", s)
