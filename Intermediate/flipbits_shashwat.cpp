#include <bits/stdc++.h>

using namespace std;

int invertBits(int n)
{

    int x = log2(n) ;

    int m = 1 << x;

    m = m | m - 1;

    n = n ^ m;

    return n;
}
int main()
{
    int n ;
    cin>>n;

    cout << invertBits(n);

    return 0;
}
