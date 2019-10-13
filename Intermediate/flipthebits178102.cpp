#include <bits/stdc++.h> 
  
using namespace std; 
  

unsigned int reverseBits(unsigned int n) 
{ 
    unsigned int rev = 0; 
      
 
    while (n > 0) 
    { 
        // bitwise left shift  
        // 'rev' by 1 
        rev <<= 1; 
          
        // if current bit is '1' 
        if (n & 1 == 1) 
            rev ^= 1; 
          
        // bitwise right shift  
        // 'n' by 1 
        n >>= 1; 
              
    } 
      
    // required number 
    return rev; 
} 
  
// Driver program to test above 
int main() 
{ 
    unsigned int n ;
    cin>>n;
    cout << reverseBits(n); 
    return 0; 
} 
