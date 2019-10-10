#fibonacci series using Recursion
print(fib(int(input("Enter the number"))))
def fib(n):
    if(n<0):
        print("Please Enter Valid input")
    elif(n==0):
        return 0
    elif(n==1):
        return 1
    else:
        return fib(n-1)+fib(n-2)
© 2019 GitHub, Inc.
