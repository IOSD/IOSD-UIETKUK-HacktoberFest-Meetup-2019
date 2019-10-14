#include<iostream>

using namespace std;
void odd(int);
int main()
{
  //take number
  int number;
  cout<<"enter the number"<<endl;
  cin>>number;
  odd(number);
  return 0;
}

void odd(int x)
{
    if(x%2!=0)
    {
      cout<<x<<" is an odd number";
    }
    else
    {
        cout<<x<<" is not an odd number";
    }
}
