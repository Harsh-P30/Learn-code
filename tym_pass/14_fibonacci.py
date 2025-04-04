n = int (input("enter length of fibonacci series:- "))

a=int(0)
b= int(1)
print(a)
print(b)
for i in range(0,n):
    next=int(a+b)
    print(next)

    a=b
    b=next
    print()