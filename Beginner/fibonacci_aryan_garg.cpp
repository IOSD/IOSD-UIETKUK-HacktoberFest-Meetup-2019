#include<iostream>
using namespace std;
int main()
{
	int i,first=0,second=1,next,c;
	cout<<"Enter the number till which you want to see fibonacci series:"<<endl;
	cin>>i;
	cout<<"the terms of fibonacci series\n"<<c<<"+";
	for(c=0;c<i;c++)// loop will work for till i.
	{
		if(c==1)
		{
           next=c;// if c is starting from 1.
		}
		else
		{
		next=first+second;// next is obtained when the second number is added to first number to obtain the next number.
		first=second;// first number is second number for all the cases.
		second=next;// next number is obtained by addition for the addition of the first and second number.
		}
		cout<<next<<"+";
	}
	return 0;
}
