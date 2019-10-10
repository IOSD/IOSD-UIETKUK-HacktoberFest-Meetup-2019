#include<bits/stdc++.h>
using namespace std;
#define lint long long 

int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b;
    for(int i=2;i<n;i++){
    	b=a+b;
    	a=b-a;
    	cout<<" "<<b;
	}
	return 0;
}
