def fibonacci(i):
    a=0
    b=1
    if (i<=0):
        print("Fibonacci series for negative numbers dont exist")
    elif (i==1):
        return a
    elif (i==2):
        return b
    else:
        for j in range(2,i):
            c=a+b
            a=b
            b=c
        return b
print(fibonacci(8))
