input_string = input("Enter all family members name separated by space  ")
# Split string into words
family_list = input_string.split(" ")

print("\n")
# Iterate a list
print("Printing all family member names")
for name in family_list:
    print(name)
