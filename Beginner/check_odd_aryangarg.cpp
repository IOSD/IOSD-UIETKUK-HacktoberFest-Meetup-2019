#include <iostream> 
using namespace std; 
  
// Returns true if n is  
// odd, else not odd 
bool isOdd(int n) 
{ 
return (n % 2 != 0); 
} 

int main() 
{  
int n = 207; 
isOdd(n)? cout << "Odd !" : 
           cout << "Is Not Odd Number!"; 
return 0; 
}  
