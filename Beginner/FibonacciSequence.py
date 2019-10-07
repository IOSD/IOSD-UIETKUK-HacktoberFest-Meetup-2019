#Fibonaci Sequence

n = int(input("How many numbers of Fibonacci Sequence would you like to see? "))
n1 = 1
n2 = 1
n3 = n1 + n2
print(n1)
print(n2)
print(n3)

for c in range(1, n-2):
    n1 = n2
    n2 = n3
    n3 = n2 + n1
    print(n3)

