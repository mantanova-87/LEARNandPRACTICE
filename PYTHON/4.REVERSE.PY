#WAP TO REVERSE THE GIVEN INTEGER
x=int(input("Enter the integer to be reversed: "))
s=0
while (x>0):        
        s=(s+x%10)*10
        x=x//10
print("REVERSE IS: ",s//10)