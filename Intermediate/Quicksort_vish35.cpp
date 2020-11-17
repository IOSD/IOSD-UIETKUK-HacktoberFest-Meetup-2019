#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void swap(int *a1,int *a2)
{
    int temp=*a1;
    *a1=*a2;
    *a2=temp;
}
int partition(int a[],int l,int h)
{
    int i=l;
    int pivot=a[h];
    for(int j=l;j<=h-1;j++)
    {
        if(a[j]<=pivot)
        {
           // i++;
            swap(&a[i],&a[j]);
            i++;
        }
    }
    swap(&a[i],&a[h]);
    return i;
}
void quicksort(int a[],int l,int h)
{
    if(l<h){
    int pi=partition(a,l,h);
    quicksort(a,l,pi-1);
    quicksort(a,pi+1,h);
    }
}
int main()
{
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
        cin>>a[i];
    quicksort(a,0,N-1);
    for(int i=0;i<N;i++)
        cout<<a[i]<<" ";
    return 0;
}
