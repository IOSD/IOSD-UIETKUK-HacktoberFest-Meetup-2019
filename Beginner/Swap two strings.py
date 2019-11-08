# Python Program - Swap Two Strings

print("Enter 'x' for exit.");
string1 = input("Enter First String to swap: ");
if string1 == 'x':
    exit();
else:
    string2 = input("Enter Second String to swap: ");
    print("\nBoth String before swap:");
    print("First String =",string1);
    print("Second String =",string2);
    temp = string1;
    string1 = string2;
    string2 = temp;
    print("\nBoth String after swap:");
    print("First String =", string1);
    print("Second String =", string2);
