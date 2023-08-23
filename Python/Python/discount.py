bill = int(input("Enter bill amount:"))
discount = int(input("Enter discount percentage:"))
bill_discounted = bill - (bill * discount / 100)
print("After discount your bill is: ", bill_discounted)

# Formula:
# Discount Amount = (Discount Percentage x Price)/100
# Discounted Price = Price - Discount Amount
