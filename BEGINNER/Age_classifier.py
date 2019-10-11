# Program for checking whether a given age falls in Child, Teen or Adult category

print("Enter Your Age")
ip = int(input())         # Input

# Simple if-elif implementation
if ip<10:
    print("Child")
elif ip <=18:
    print("Teen")
else:
    print("Adult")


