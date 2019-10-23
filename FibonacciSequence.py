def Fib(n): 
    if n==1: 
        return 0
    elif n==2: 
        return 1
    else: 
        return Fib(n-1)+Fib(n-2) 
print(Fib(9)) 
