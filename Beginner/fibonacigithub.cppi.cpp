#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ x:   
int n,a=0,b=1,c,i;
cout<<"Enter the no of terms you want in fibonacci series:\t";
cin>>n;
cout<<"The required fibonacci series is";
cout<<a<<" ";
cout<<b<<" ";
for(i=1;i<n;i++)
{
	c=a+b;
	a=b;
	b=c;
	cout<<c<<" ";
}
int z;
cout<<"do you want to continue\n1.yes\n2.no\n";
    cin>>z;
    if(z==1)
    {
    	goto x;
	}

return 0;
}
