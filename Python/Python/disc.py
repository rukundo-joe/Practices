bill = int(input("Enter bill amount:"))
discount = int(input("Enter discount percentage:"))
output = bill - (bill * discount / 100)
print("After discount your bill is: ", output)Formula:

Discount Amount = (Discount Percentage x Price)/100

Discounted Price = Price - Discount Amount

Sample Program code: discountCalculator.py

   price = 1000;
   discount_percentage = 5.99;
   discount_amount = 0;
   discounted_price = 0;

   discount_amount = (discount_percentage*price)/100;
   discounted_price = (price-discount_amount);

   print("Discount Amount: ", discount_amount);
   print("Discounted Price: ", discounted_price);

Output:

Discount Amount: 59.9
Discounted Price: 940.1
