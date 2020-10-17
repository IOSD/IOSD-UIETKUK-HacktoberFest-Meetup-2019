#include <iostream>
using namespace std;

int main() {
    int n=0;
	cout<<"Program for to print fabonacci series: ";
	cout<<"enter the number :";
	cin>>n;
	int a=0,b=1;
	cout<<a<<" "<<b<<" ";
	int i=0,sum=0;
	for(i=2;i<=n;i++)
	{sum=a+b;
	  a=b;
	  b=sum;
	  cout<<sum<<" ";
	}
	
	
	return 0;
}
