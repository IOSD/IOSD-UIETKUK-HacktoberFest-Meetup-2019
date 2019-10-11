# Program for calculating Fibonacci Sequence
# Recursive function to calculate series
def fib(n):
    if n<=1:
        return n
    else:
        return( fib(n-1) + fib(n-2))

print("Enter Input")
ip = int(input())         # Input(no. of terms of fibonacci wanted in output)

if ip<0:
    print("Invalid Input")
else:
    print("Fibonacci Sequence:")
    for i in range(ip):
        print(fib(i))