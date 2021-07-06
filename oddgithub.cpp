#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   x:
	int a;
	int z;
	cout<<"Enter the number you want to check wheter it is odd or not:\t";
	cin>>a;
	if((a+1)/2==a/2)
	{
		cout<<"\nEnter number is even.";
	}
	else
	{
		cout<<"\nEnterted number is odd.";
	}
	cout<<"do you want to continue\n1.yes\n2.no\n";
    cin>>z;
    if(z==1)
    {
    	goto x;
	}
}

