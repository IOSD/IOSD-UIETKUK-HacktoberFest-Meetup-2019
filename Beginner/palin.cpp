#include<bits/stdc++.h>
using namespace std;
#define lint long long 

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length()/2;i++){
    	if(s[i]!=s[s.length()-i-1]){
    		cout<<"Not Palindrome";
    		cin>>i;
			exit(0);
		}
	}
	cout<<"Pallindrome"<<endl;
	return 0;
}
