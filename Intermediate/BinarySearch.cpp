
#include<iostream>
using namespace std;
bool binarysearch(int arr[],int start,int end,int k)
{
    if(start>end){
        return false;
    }
     int mid=(start+end)/2;

      if(arr[mid]==k){
         return true;
      }
        if(arr[mid]>k){
          return binarysearch(arr,start,mid-1,k);
        }

          return binarysearch(arr,mid+1,end,k);
}
  int main()
  {
      int n,i;
      cout<<"Enter the size of array"<<endl;
      cin>>n;
      int arr[1000];
      cout<<"Enter the elements of array"<<endl;

      for(i=0;i<n;i++){
          cin>>arr[i];
      }

       int k;
       cout<<"Enter the no to be found"<<endl;
       cin>>k;
       int start=0;
       int end=n-1;
       if(binarysearch(arr,start,end,k)){
           printf("FOUND");
       }
       else{
           printf("NOT FOUND");
       }
  }
