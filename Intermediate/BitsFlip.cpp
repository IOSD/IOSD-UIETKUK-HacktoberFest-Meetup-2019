#include <bits/stdc++.h>
using namespace std;

void invertBits(int num)
{
    //No of bits
    int x = log2(num) + 1;

    //Inverting bits
    for (int i=0;i<x;i++) {
       num=(num ^ (1<<i));
    }
    cout<<num;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    invertBits(num);
    return 0;
}
