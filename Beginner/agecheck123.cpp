#include<iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter the number";
  cin>>x;
  if(x>=18)
  cout<<"Adult";
  else if(x>10)
        cout<<"Teen";
        else if(x<10)
             cout<<"Child";
}             
