# Python program to illustrate use of exec to 
# execute a given code as string. 

# function illustrating how exec() functions. 
def exec_code(): 
	LOC = """ 
def factorial(num): 
	fact=1 
	for i in range(1,num+1): 
		fact = fact*i 
	return fact 
print(factorial(5)) 
"""
	exec(LOC) 
	
# Driver Code 
exec_code() 
