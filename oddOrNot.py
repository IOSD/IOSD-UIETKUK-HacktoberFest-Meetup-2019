##############           Code By - ORASHAR              #################
############## Checks For the nubmer to be odd or  even #################

try:
    n = int(input("Enter  the number: "))
    if n % 2 == 0:
        print(f"Number {n} is even number")
    else:
        print(f"Number {n} is odd number")
except:
    print("Invalid input!")
