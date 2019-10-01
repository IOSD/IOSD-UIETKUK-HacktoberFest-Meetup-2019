#Check Whether Input String is Palindrome or Not

print("-="*20)
print("Check Whether Word is Palindrome or Not")
print("-="*20)

word = input("Type a word: ")
inverse = word[::-1]

print(word)
print(inverse)

if word == inverse:
    print(f"The word {word} is a palindrome.")
else:
    print(f"The word {word} is not a palindrome.")