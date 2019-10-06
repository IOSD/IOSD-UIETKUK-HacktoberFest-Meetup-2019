#include <iostream> 
#include <string.h>  
using namespace std; 
void isPalindrome(char str[]) 
{ 
    int l = 0; 
    int h = strlen(str) - 1; 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
           cout<<str<<" is Not Palindrome"; 
            return; 
        } 
    } 
    cout<<str<<" is palindrome"; 
} 
  
int main() 
{ 
    string s;
    cout<<"Enter String";
    cin>>s;
    isPalindrome(s);
    return 0; 
}