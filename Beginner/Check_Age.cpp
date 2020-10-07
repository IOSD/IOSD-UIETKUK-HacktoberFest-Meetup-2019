#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cout << "Input age";
    cin >> n;
    
    if(n > 18)
        cout << "Adult";
    else if(n > 10 && n <= 18)
        cout << "Teen";
    else 
        cout << "Child";
        
return 0;
}
