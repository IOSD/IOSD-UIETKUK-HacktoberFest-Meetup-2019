
# Python Program to find number of possible 
# values of X to satisfy A mod X = B 
import math 

# Returns the number of divisors of (A - B) 
# greater than B 
def calculateDivisors (A, B): 
	N = A - B 
	noOfDivisors = 0
	
	a = math.sqrt(N) 
	for i in range(1, int(a + 1)): 
		# if N is divisible by i 
		if ((N % i == 0)): 
			# count only the divisors greater than B 
			if (i > B): 
				noOfDivisors +=1
				
			# checking if a divisor isnt counted twice 
			if ((N / i) != i and (N / i) > B): 
				noOfDivisors += 1; 
				
	return noOfDivisors 
	
# Utility function to calculate number of all 
# possible values of X for which the modular 
# equation holds true 
	
def numberOfPossibleWaysUtil (A, B): 
	# if A = B there are infinitely many solutions 
	# to equation or we say X can take infinitely 
	# many values > A. We return -1 in this case 
	if (A == B): 
		return -1
		
	# if A < B, there are no possible values of 
	# X satisfying the equation 
	if (A < B): 
		return 0
		
	# the last case is when A > B, here we calculate 
	# the number of divisors of (A - B), which are 
	# greater than B	 
	
	noOfDivisors = 0
	noOfDivisors = calculateDivisors; 
	return noOfDivisors 
		
	
# Wrapper function for numberOfPossibleWaysUtil() 
def numberOfPossibleWays(A, B): 
	noOfSolutions = numberOfPossibleWaysUtil(A, B) 
	
	#if infinitely many solutions available 
	if (noOfSolutions == -1): 
		print ("For A = " , A , " and B = " , B 
				, ", X can take Infinitely many values"
				, " greater than " , A) 
	
	else: 
		print ("For A = " , A , " and B = " , B 
				, ", X can take " , noOfSolutions 
				, " values") 
# main() 
A = 26
B = 2
numberOfPossibleWays(A, B) 


A = 21
B = 5
numberOfPossibleWays(A, B) 

# Contributed by _omg
