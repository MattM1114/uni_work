num= int(input("please enter a number "))

for i in range(1,num+1):
    # this will do the starting space 
    for j in range(num -i):
        print(" " ,end="")
    # this will do print the *
    for k  in range (1,2*i):
        print("*",end="")