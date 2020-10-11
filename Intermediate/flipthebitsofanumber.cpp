// CPP program to invert actual bits 
// of a number. 
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
  
// Driver code 
int main() 
{ 
    int num = 11;  
    invertBits(num); 
    return 0; 
} 
