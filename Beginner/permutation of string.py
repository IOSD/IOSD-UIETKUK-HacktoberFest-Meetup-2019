# Python code to demonstrate 
# to find all permutation of 
# a given string 

# Initialising string 
ini_str = "abc"

# Printing initial string 
print("Initial string", ini_str) 

# Finding all permuatation 
result = [] 

def permute(data, i, length): 
	if i == length: 
		result.append(''.join(data) ) 
	else: 
		for j in range(i, length): 
			# swap 
			data[i], data[j] = data[j], data[i] 
			permute(data, i + 1, length) 
			data[i], data[j] = data[j], data[i] 
permute(list(ini_str), 0, len(ini_str)) 

# Printing result 
print("Resultant permutations", str(result)) 
