def SumOfNNums(arr, tot):
    s = 0
    for i in range(tot):
        s = s+arr[i]
    return s

num = []
print(end="Enter the Value of n: ")
n = int(input())
print(end="Enter " + str(n) + " Numbers: ")
for i in range(n):
    num.insert(i, int(input()))

sum = SumOfNNums(num, n)
print("\nSum of " + str(n) + " Numbers = " + str(sum))
