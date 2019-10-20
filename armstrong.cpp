// CPP program to find Armstrong numbers in a range 
#include <bits/stdc++.h> 
using namespace std; 

// Prints Armstrong Numbers in given range 
void findArmstrong(int low, int high) 
{ 
	for (int i = low+1; i < high; ++i) { 

		// number of digits calculation 
		int x = i; 
		int n = 0; 
		while (x != 0) { 
			x /= 10; 
			++n; 
		} 

		// compute sum of nth power of 
		// its digits 
		int pow_sum = 0; 
		x = i; 
		while (x != 0) { 
			int digit = x % 10; 
			pow_sum += pow(digit, n); 
			x /= 10; 
		} 

		// checks if number i is equal to the 
		// sum of nth power of its digits 
		if (pow_sum == i) 
			cout << i << " ";	 
	} 
} 

// Driver code 
int main() 
{ 
	int num1 = 100; 
	int num2 = 400; 
	findArmstrong(num1, num2); 
	cout << '\n'; 
	return 0; 
} 
