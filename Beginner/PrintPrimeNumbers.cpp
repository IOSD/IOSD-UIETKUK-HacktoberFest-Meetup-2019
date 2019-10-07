#include <iostream>
using namespace std;

int main(){
    //program to print all prime numbers between 2 and the inputted number.
    int n;
    cin>>n; //Input a number
    for(int i=2;i<=n;i++)
    {
        int c=-1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0) //check for factors
                c=1;
        }
     
    if(c==-1) //if no factors, print number
        cout<<i<<endl;
    }
    
  
}


