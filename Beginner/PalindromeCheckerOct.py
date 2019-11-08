def reverse(x):
  return s[::-1]
  
def palindromeCheck(x):
  rev = reverse(x)
  
  if (x == rev):
    return True
  return False #Checks for condition that both are equal or not.
  
 x = input()
 newTxt = palindromeCheck(x)
 
 if ans == 1:
    print("This is a palindrome.")
 else:
    print("Nope. Try again.")
  
