palindrome = input("Enter a palindrome : ")
isPalindrome = True;

def palindromeChecker(palindrome):
    global isPalindrome
    if isPalindrome:
        if len(palindrome) < 2:
            print("this is a valid palindrome")
       
        else:
            if palindrome[0] == palindrome[-1]:
                palindrome = palindrome[1:-1]
            else :
                isPalindrome = False
            return palindromeChecker(palindrome)
    else:
        print("this is not a valid palindrome")

palindromeChecker(palindrome)
