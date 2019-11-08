# Ask the user for a string and print out whether this string is a palindrome or not.

x = input("enter a word : ")
l = list(x)                                     # input to list form
rev = l[:: -1]                                  # reversing the list

if l== rev:
    print("Input is a paliandrome")
else :
    print("Input is not a paliandrome ")

print("input word : ", x)
j = ''.join(rev)                                 # code to join the each items in a list['a','b','c'] to abc
print("reverse word : ",j)
