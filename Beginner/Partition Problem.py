# A recursive Python3 program for 
# partition problem 

# A utility function that returns 
# true if there is a subset of 
# arr[] with sun equal to given sum 
def isSubsetSum (arr, n, sum): 
	# Base Cases 
	if sum == 0: 
		return True
	if n == 0 and sum != 0: 
		return False

	# If last element is greater than sum, then 
	# ignore it 
	if arr[n-1] > sum: 
		return isSubsetSum (arr, n-1, sum) 

	''' else, check if sum can be obtained by any of 
	the following 
	(a) including the last element 
	(b) excluding the last element'''
	
	return isSubsetSum (arr, n-1, sum) or isSubsetSum (arr, n-1, sum-arr[n-1]) 

# Returns true if arr[] can be partitioned in two 
# subsets of equal sum, otherwise false 
def findPartion (arr, n): 
	# Calculate sum of the elements in array 
	sum = 0
	for i in range(0, n): 
		sum += arr[i] 
	# If sum is odd, there cannot be two subsets 
	# with equal sum 
	if sum % 2 != 0: 
		return false 

	# Find if there is subset with sum equal to 
	# half of total sum 
	return isSubsetSum (arr, n, sum // 2) 

# Driver program to test above function 
arr = [3, 1, 5, 9, 12] 
n = len(arr) 
if findPartion(arr, n) == True: 
	print ("Can be divided into two subsets of equal sum") 
else: 
	print ("Can not be divided into two subsets of equal sum") 
