def isPalindrome(strn): 
    for i in range(0, len(strn)//2):  
        if strn[i] != strn[len(strn)-i-1]: 
            return False
    return True

x=input()
if isPalindrome(x)==1:
    print("Yes, '{}' is a palindrome".format(x))
else:
    print("No, '{}' is NOT a palindrome".format(x))
