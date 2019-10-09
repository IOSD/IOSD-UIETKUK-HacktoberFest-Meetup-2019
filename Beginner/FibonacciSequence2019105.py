global nbFibonacciNumber

global first
global second

nbFibonacciNumber =  int(input("Enter the number of number of the fibonacci you want : "))

first = 0
second = 1

def fibonacci(first,second):

    print(first)
 
    next = first + second
    second = first
    first = next
    global nbFibonacciNumber
    nbFibonacciNumber = nbFibonacciNumber -1
    
    if  nbFibonacciNumber != 0: 
        fibonacci(first,second)

fibonacci(first,second)
