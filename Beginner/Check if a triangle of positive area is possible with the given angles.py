# Python program to check if a triangle 
# of positive area is possible with 
# the given angles 

def isTriangleExists(a, b, c): 
	# Checking if the sum of three 
	# angles is 180 and none of 
	# the angles is zero 
	if(a != 0 and b != 0 and c != 0 and (a + b + c)== 180): 
		# Checking if sum of any two angles 
		# is greater than equal to the third one 
		if((a + b)>= c or (b + c)>= a or (a + c)>= b): 
			return "YES"
		else: 
			return "NO"
	else: 
		return "NO"

# Driver Code 
a, b, c = 50, 60, 70

print(isTriangleExists(50, 60, 70))
