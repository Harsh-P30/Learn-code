a= int (input("enter a number:- "))

for i in range(2,a):
    if (a%i==0):
        print('not prime')
    
else:
        print(i,"is prime")