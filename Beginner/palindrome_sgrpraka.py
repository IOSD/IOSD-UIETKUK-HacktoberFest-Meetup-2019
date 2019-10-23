a=input("Enter the name or number to check if its a palindrome:")
if(a==a[::-1]):
    print("It is a palindrome")
else:
    print("It is not a palindrome")
