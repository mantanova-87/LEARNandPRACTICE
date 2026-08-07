import math
N=int(input("Enter the number to check for being prime: "))
if N<2 or N==4:
    print(N,"is not a prime number.")
elif N==2 or N==3:
    print(N,"is a prime number.")
else:
    C=0
    for i in range(2,int(math.sqrt(N))):
        if N%i==0:
            C+=1
    if C==0:
        print(N,"is a prime number.")
    else:
        print(N,"is not a prime number.")
