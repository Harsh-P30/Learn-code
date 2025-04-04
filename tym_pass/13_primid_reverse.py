n =int(input("Enter height:- "))

for i in reversed(range(n+1)):
    for j in range(n-i):
        print(" ",end="")
    for j in range(i):
        print("*",end=" ")

    print()