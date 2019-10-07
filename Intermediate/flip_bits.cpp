#include <bits/stdc++.h> 
using namespace std; 

void invertBits(int num) 
{ 
	// calculating number of bits 
	// in the number 
	int x = log2(num) + 1; 

	// Considering number to be 32 bit integer; 
	bitset<32> b(num); 

	// reversing the bits one by one 
	for (int i = 0; i < x; i++) 
		b.flip(i); 

	// converting bitset to number 
	cout << b.to_ulong(); 
} 

int main() 
{ 
	int num;
  cout << "Enter a number: ";
  cin >> num;
  cout << "\nNumber after inverting the bits: ";
	invertBits(num); 
	return 0; 
} 
