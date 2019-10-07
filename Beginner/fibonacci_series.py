def fib(n):
    if(n == 1):
        return 0
    elif(n == 2):
        return 1
    else:
        return(fib(n-1) + fib(n-2))

i = int(input("Enter the term you need to find: "))

print(fib(i))