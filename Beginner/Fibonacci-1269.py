def fibo(n): 
    if n<0: 
        print("Wrong input") 
    elif n==1: 
        return 0
    elif n==2: 
        return 1
    else: 
        return fibo(n-1)+fibo(n-2)  
