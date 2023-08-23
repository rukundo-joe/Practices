name = input("Enter the student's name: ")
marks = {'Bill':90,'Joe':95,'Ramy':98,'Lisa':100}
for i in marks:
    if i == name:
                print(marks[i])
                break

else:
    print("No data matches the entry")
