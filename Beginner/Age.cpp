#include<bits/stdc++.h>
using namespace std;
#define lint long long 

int main()
{
    int age;
    cin>>age;
    cout<<((age>10)?((age>18)?"adult":"teen"):"child");
	return 0;
}
