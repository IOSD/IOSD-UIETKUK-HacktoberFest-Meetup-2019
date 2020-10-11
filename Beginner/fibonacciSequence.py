########################## Code By - ORASHAR  ###########################
########################## Fibonacci Sequence ###########################

def Fibonacci(n):
    n1 = 0
    n2 = 1
    c = 0
    ans = []
    if n == 1:
        ans = n1
    else:
        while c < n:
            ans.append(n1)
            nth = n1 + n2
            n1 = n2
            n2 = nth
            c += 1
    print(f"fibonacci sequence upto {n} terms ", end=': ')
    for a in ans:
        print(a, end = ' ')

try:
    n = int(input("enter number of terms: "))
    if n < 0:
        print("Input must be a positive number")
    else:
        Fibonacci(n)
except:
    print("invalid input!")
