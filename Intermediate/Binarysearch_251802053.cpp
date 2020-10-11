#include<iostream>
using namespace std;

int main()
{
	int size,val;
	cin>>size;
	int arr[100];
	
	for(int i=0;i<size;i++)
		cin>>arr[i];

	cin>>val;
	
    int start=0,end=size-1,mid;
           
    while(start<=end)
{      
        int mid=(start+end)/2;

      
        
       if(arr[mid]==val)
        {
            cout<< mid;
            break;
            
        }
        else if(val>arr[mid])
        {
          start=mid+1;
            
        }
        
       else  if(val<arr[mid])
        {
            end=mid-1;
        }
            
     }
    
    if(start>end)
    {
        cout<<-1;  return 0;}
