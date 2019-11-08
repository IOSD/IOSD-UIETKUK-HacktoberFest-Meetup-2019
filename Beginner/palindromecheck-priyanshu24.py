'''
Author  : Priyanshu Gupta
Github  : Priyanshu24
Blogs   : https://www.cosmicspace.space/
'''
word = input('Enter the number or string to check for palindrome: ')
def is_palindrome(word):
    reversed_word = word[::-1]
    print("The string is palindrome") if word == reversed_word else print("The string is not a palindrome")
is_palindrome(word)