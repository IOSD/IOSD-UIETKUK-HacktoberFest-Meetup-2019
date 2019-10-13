s = input("Enter the string: ")
if len(s)>1:
    palindrome = True
    for i in range(0, len(s) // 2):
        if (s[i].lower() == s[len(s) - i - 1].lower()):
            palindrome = True
        else:
            palindrome = False
            break
    if (palindrome):
        print("Palindrome")
    else:
        print("Not a Palindrome")
else:
    print("pls enter a valid string")
