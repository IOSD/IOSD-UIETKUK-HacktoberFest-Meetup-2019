#include<bits/stdc++.h>
using namepsace std;
int bis(int a[],int i,int n,int e)
{
  while(i<=n)
  {
    int mid=(i+n)/2;
    if(a[mid]==e)
      return mid;
    else if(a[mid]>e)
      i = mid+1;
    else
      n = mid-1
  }
  return -1;
}
int main()
{
  int n,e;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>e;
  int sol = bis(a,0,n-1,e);
  if(sol==-1)
  cout<<"Element not present in array"<<"\n";
  else
  cout<<"Element Present At Index "<<sol<<"\n";
  return 0;
}
