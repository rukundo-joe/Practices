no_rows = int(input("Enter the number of rows you want: "))
for rows in range(no_rows+1, 0, -1):
    for cols in range(1, rows+1):
        print("*", end=" ")
    print()
