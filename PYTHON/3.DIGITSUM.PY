#WAP TO TAKE A NUMBER AS INPUT FROM USER AND CALC THE SUM OF ALL ALL ITS DIGITS
A=int(input("Enter the number: "))
if A>=0:
    N=A
else:
    N=(-(A))
S=0
while N!=0:
    S=S+(N%10)
    N=N//10
print("SUM OF DIGITS OF GIVEN NUMBER IS: ",S)