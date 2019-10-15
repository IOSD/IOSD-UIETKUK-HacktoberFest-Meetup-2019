# Python Program - Generate Random Numbers

from random import randint;
print("Enter 'x' for exit.");
val1 = input("Enter lower limit to generate random numbers: ");
if val1 == 'x':
    exit();
else:
    val2 = input("Enter upper limit to generate random numbers: ");
    val3 = input("How many random numbers to print ? ");
    lower = int(val1);
    upper = int(val2);
    amount = int(val3);
    print();
    for i in range(0, amount):
        print(randint(lower, upper),end=" ");
