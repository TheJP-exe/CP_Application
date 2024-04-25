
a = int(input("Enter the value of base : ")) # Given "a" & "b" is an integer 
b = int(input("Enter the value of exponent : "))

#Converting the exponent into binary form
c = bin(b)[2:] 

#Applying the formula ie No of Multiplication = Lenght of binary + Sum of digits - 2
print("No of Multiplication = ", len(c)+c.count("1")-2 )
