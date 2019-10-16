
#include <bits/stdc++.h> 
using namespace std; 

void invertBits(int num) 
{ 
	int x = log2(num) + 1; 

	for (int i = 0; i < x; i++) 
	num = (num ^ (1 << i)); 

	cout << num; 
} 

int main() 
{ 
	int num = 11; 
	invertBits(num); 
	return 0; 
} 
