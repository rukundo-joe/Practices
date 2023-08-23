
x = "DISCOUNT CALCULATION"
var1 = 4
print("MY {} ASSIGNMENT FOR QUESTION {}".format(x,var1))

product_code = str(input("Enter Product code:"))
number_unit = int(input("Enter the number of unit:"))

print("You have ordered for product {}, with price {}".format(product_code,number_unit))

#Product code / Set price of product
if product_code == "A":
	price = 30
elif product_code == "B":
	price = 50
elif product_code == "C":
	price = 100

#Set discounts
if 1 <= number_unit < 100:
    discount = 0
elif 100 <= number_unit < 500:
    discount = 0.01
elif number_unit > 500:
    discount = 0.25
else:
    discount = 0.2

#Create function
def total_price(cost, disc, num):
	disc_price = cost - (cost*disc)
	final_price = disc_price * num
	return final_price

#Call the function
print(total_price(price, discount, number_unit))
