# Python program to find all 
# Strong Numbers in given list 
def factorial(number): 
	if(number == 0 or number == 1): 
		fact = 1
	else: 
		fact = number * factorial(number - 1) 
	return fact 

def strong_number(list): 
	new_list =[] 

	for x in list: 
		temp = x 
		sum = 0
		while(temp): 
			rem = temp % 10
			sum += factorial(rem) 
			temp = temp // 10
		if(sum == x): 
			new_list.append(x) 
		else: 
			pass
			
	return new_list 
		
# Driver Code 
val_list = [1, 2, 5, 145, 654, 34] 
strong_num_list = strong_number(val_list) 
print(strong_num_list) 
