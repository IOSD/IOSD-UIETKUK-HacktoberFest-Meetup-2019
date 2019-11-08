# Python Program to Check a Given String is Palindrome or Not

string = input("Please enter your own String : ")

if(string == string[:: - 1]):
   print("This is a Palindrome String")
else:
   print("This is Not a Palindrome String")
