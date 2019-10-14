#include<bits/stdc++.h>
using namespace std;

int  flipped(int n)
{
	int c=log2(n)+1;

	for(int i=0;i<c;i++)
	{
		n=(n^(1<<i));
	}
	return n;
}

int main()
{
	int a=5;
	cout<<"Number when flipped : "<<flipped(a)<<endl;
	return 0;
}
