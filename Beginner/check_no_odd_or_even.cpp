#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i, n)  for(ll i = 0; i < (n); ++i)
#define rep1(i,n)  for(ll i = 1;i <= (n); ++i)
#define pb push_back
#define M 1000000007
unordered_map<ll,ll>mp;

int main()
{

    fastIO
    int n;
    cin>>n;
    if(n&1)
        cout<<"no is odd";
    else
        cout<<"no is even";
	return 0;
}
