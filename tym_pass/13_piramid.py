height = int(input("enter height of piramid:- "))

for i in range(height):
    for j in range(height-i-1):
        print(" ",end="")
    for j in range(i+1):
        print("*",end=" ")
    print()