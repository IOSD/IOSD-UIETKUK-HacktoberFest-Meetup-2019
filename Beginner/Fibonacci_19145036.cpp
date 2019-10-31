
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cout << "Input number of terms:";
    cin >> n;
    
    cout << "Fibonacci Sequence: ";
    
    int a = 0, b = 1, c = 0;
        if(n == 1){
            cout<< a;
        else if(n == 2){
            cout<<a<<" "<< b;
        else{
            cout<<a<<" "<<b;
            for(int i=3;i<=n;i++)
            c = a + b;
            a = b;
            b = c;
            cout << " " << c;
    }
}
