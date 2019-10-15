# Python code to demonstrate 
# to count total number 
# of substring in string 

# Initialising string 
ini_str = "ababababa"
sub_str = 'aba'

# Count count of substrings using startswith 
res = sum(1 for i in range(len(ini_str)) 
		if ini_str.startswith("aba", i)) 

# Printing result 
print("Number of substrings", res) 
