total_cost = int(input('Please enter a total_cost:'))
if total_cost>=500:

   print"You have won a discount by 15 percent"
   total_cost *= 0.85



elif total_cost>100:

   print"You have won a discount by 10 percent"
   total_cost *= 0.9



elif total_cost>=50:

   print"You have won a discount by 5 percent"
   total_cost *= 0.95

else:
   print 'you total cost is not in the range of discount!'
print 'Now the total cost is ', total_cost
