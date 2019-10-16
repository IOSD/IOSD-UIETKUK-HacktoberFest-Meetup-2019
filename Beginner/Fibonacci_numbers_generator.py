r = int(input("Enter range: "))
print(f"\nThe first {r} Fibonacci numbers are:\n")
n1 = n2 =1
print(n1)
print(n2)
for i in range(r-2):
    n3 = n1+n2
    print(n3)
    n1 = n2
    n2 = n3
