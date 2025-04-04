n=int(input("enter height:- "))

for i in range(n+1):
    for j in range(n):
        print(" ",end="")
    for j in range(i):
        print("*",end=" ")
    print()