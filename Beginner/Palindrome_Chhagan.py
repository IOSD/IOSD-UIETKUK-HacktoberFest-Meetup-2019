string = input("Input the String: ")

def check_palin(string):
    n = len(string)
    for i in range(int(n/2)):
        if(string[i]!=string[n-i-1]):
            return False
    
    return True

if(check_palin(string)):
    print("String is a Palindrome")
else:
    print("String is not a Palindrome")
