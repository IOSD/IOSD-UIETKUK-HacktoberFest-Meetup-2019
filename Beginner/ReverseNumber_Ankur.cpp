#include<iostream>
using namespace std;

int main() {
    int n,reverse=0;
    cin>>n; //input from user
    while(n)
    {
        reverse=reverse*10+(n%10);
        n=n/10;
    }
	cout<<reverse<<endl;
}
