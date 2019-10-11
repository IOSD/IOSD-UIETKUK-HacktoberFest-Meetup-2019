#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{    x:
	char name[50];
	  int age,z;
	cout<<"Enter the name :\t";
	cin>>name;
	cout<<"\nEnter the your age :\t";
	cin>>age;
	
	if (age>=18)
{
		cout<<"\nYou are adult";
}
else
{
	cout<<"\nYou are under 18";
}

	cout<<"\nDo you want to continue\n1.yes\n2.no\n";
    cin>>z;
    if(z==1)
    {
    	goto x;
	}
	
}
