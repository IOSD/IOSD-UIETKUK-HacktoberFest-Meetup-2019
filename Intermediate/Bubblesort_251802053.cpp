#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int arr[100];

	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
            	// Swap
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";	

}	


