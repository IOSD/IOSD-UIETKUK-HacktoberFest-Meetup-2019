#include<iostream>
using namespace std;
int main()
{
    int a[7]={21,45,64,93,15,89,69};//highest element moves to right in each iteration
    int n=7;
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {

        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                 swap(a[j+1],a[j]);

            }

        }

    }
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";

}
