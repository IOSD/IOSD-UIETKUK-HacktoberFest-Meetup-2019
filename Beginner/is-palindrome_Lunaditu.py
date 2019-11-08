alphabet = "abcdefghijklmnopqrstuvwxyz"
def is_palindrome(string:str):
	newstr = ""
	for char in string.lower():
		if (char in alphabet):
			newstr = newstr + char
	newstr = newstr.lower()
	return newstr == newstr[::-1]
#tests
tests = [
is_palindrome("binom"), is_palindrome("madam"), is_palindrome("9123219"),
is_palindrome("sir"), is_palindrome("nurses run"), is_palindrome("Was It a Rat I Saw?"),
is_palindrome("Dammit, I'm not Mad!"), is_palindrome("Never Odd or Even"),
]
print (tests)