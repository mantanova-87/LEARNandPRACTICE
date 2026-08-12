#WAP TOO TAKE MARKS OF 10 STUD AND FIND TOP 3 AND BOTTOM 3.
numbers = list(map(int, input("Enter numbers: ").split()))
print(numbers)

L1=[]
L2=[]

for i in range(0,3):
    L1.append(max(numbers))
    L2.append(min(numbers))
    numbers.remove(max(numbers))
    numbers.remove(min(numbers))
print("top 3: ",L1)
print("BOTTOM 3: ",L2)
    
    
