P = int(input("Enter the first number"))
Q = int(input("Enter the second number"))
print("P before swap is",P,"and Q is",Q)
P = P+Q
Q = P-Q
P = P-Q
print("After swap , value of P is",P,"and value of Q is",Q)