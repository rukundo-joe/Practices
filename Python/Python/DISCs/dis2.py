if (product_code=="A"):
    if 1<=number_unit <100:
        discount = 0
    elif 100 <= number_unit < 500:
        discount = 0.01
    elif number_unit > 500:
        discount = 0.25
    else:
        discount = 0.2
   amount_discounted = discount * 30
   price=number_unit*30
   final_price = price - amount_discounted

elif (product_code=="B"):
    if 1<=number_unit <100:
        discount = 0
    elif 100 <= number_unit < 500:
        discount = 0.01
    elif number_unit > 500:
        discount = 0.25
    else:
        discount = 0.2
   amount_discounted = discount * 50
   price=number_unit*50
   final_price = price - amount_discounted

elif (product_code=="C"):
    if 1<=number_unit <100:
        discount = 0
    elif 100 <= number_unit < 500:
        discount = 0.01
    elif number_unit > 500:
        discount = 0.25
    else:
        discount = 0.2
   amount_discounted = discount * 100
   price=number_unit*100
   final_price = price - amount_discounted
