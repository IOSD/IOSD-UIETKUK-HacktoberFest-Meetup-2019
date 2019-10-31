#include<stdio.h>
int main()
{
    int n,r,rev=0;
    cout<<"Enter number to be checked \n";
    cin>>n;
    int p=n;
    while(p!=0)
    {
        r=p%10;
        rev=rev*10+r;
        p=p/10;
    }
    if(n==rev)
      cout<<"Palindrome";
    else
      cout<<"Not Palindrome";
}
