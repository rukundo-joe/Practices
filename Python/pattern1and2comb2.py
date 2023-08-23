no_rows = int(input("Enter the number of rows you want: "))
for rows in range(1, no_rows+1):
    for cols in range(1, rows+1):
        print("*", end=" ")
    print()

for rows in range(no_rows-1, 0, -1):
    for cols in range(1, rows+1):
        print("*", end=" ")
    print()
#Best way as it will print the rows we gave
