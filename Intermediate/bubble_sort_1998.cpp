#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[],int n)
{
   int temp=0;
   for(int i=0;i<n-1;i++)
   {
      for(int j=0;j<n-1;j++)
      { 
          if(a[j]>a[j+1])
          {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
          }
          else if(a[j]<a[j+1])
          { 
             continue;
          }
      }
   }
}
int main()
{
   int n;
   cin >> n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin >> a[i];
   }
   BubbleSort(a,n);
   for(int i=0;i<n;i++)
   {
      cout << a[i] << " ";
   }
}
