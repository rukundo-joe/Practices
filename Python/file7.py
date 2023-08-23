grade = input("Enter the grade: ")
marks = {'A':'100 - 70','B':'70 - 65','C':'65 -60','D':'60 - 55'}
for i in marks:
    if i == grade:
                print(marks[i])
                break

else:
    print("No data matches the entry")
