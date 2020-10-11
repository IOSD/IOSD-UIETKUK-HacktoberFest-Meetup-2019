s = input("Enter the string: ")
palindrome = True
for i in range(0, len(s)//2):
    if(s[i].lower() == s[len(s)-i-1].lower()):
        palindrome = True
    else:
        palindrome = False
        break
if(palindrome):
    print("Palindrome")
else:
    print("Not a Palindrome")