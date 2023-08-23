price_per_unit = 500
items_number = int(input("Enter the number of items bought: "))
Amount = items_number * price_per_unit
print("Amount to be paid = ", Amount)
if Amount == 5000:
    discount = 20
else:
    discount = 0
discount_Amount = (Amount * discount)/100
net_Amount = Amount - discount_Amount
print("Discount = ",discount, "and the discount amount = ",discount_Amount)
print("So the net amount =",net_Amount)
