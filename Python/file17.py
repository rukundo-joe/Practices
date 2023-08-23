list = []
n = int(input("How many elements you want the list to contain please? "))
print("Enter the ", n, " numbers")
for i in range(0,n):
    ele = int(input())
    list.append(ele)

print(list)
