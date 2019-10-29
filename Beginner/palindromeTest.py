s = input("Enter a string: ")

if s[len(s)::-1].lower() == s.lower():
    print(s, "is a palindrome")
else:
    print(s, "is not a palindrome")