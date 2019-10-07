######################           Code By - ORASHAR         #########################
###################### Palindrome check for a given string #########################

s = input()
rs = s[::-1]
if rs == s:
    print("Entered string is a palindrome")
else:
    print("not a palindrome")
