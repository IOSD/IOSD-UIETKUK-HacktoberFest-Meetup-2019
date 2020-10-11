#include <iostream>
using namespace std;
void merge_sort( int input[], int si, int ei)   // A merge sort function
{
    int arr[ei-si+1];   /* creating an array of size of given array*/

    if(si>=ei)
    {
        return ;
    }
    if(si<ei)
    {
        int mid=(si+ei)/2;

        merge_sort( input, si, mid);  // recursion call for the first part
        merge_sort( input, mid+1, ei);// recursion call for the second part

int i=si;
int j=mid+1;
int k=0;
  // this part is used for merging the two parts
         while((i<=mid)&&(j<=ei))
         {
             if(input[i]<=input[j])
             {
                 arr[k]=input[i];
                 i++;
             }
             else
             {
                 arr[k]=input[j];
                 j++;
             }
             k++;
         }
         // this part is used for the left elements in the two parts if any to enter the new array
         while(i<=mid)
         {
             arr[k++]=input[i];
             i++;
         }
         while(j<=ei)
         {
             arr[k++]=input[j];
             j++;
         }
        // this is used to assign elements of the new array into the input array
for(int g=si, h=0 ; (g<=ei)&&h<ei-si+1;g++, h++)
   {
           input[g]=arr[h];
    }
}
}
    void mergeSort( int input[], int n)
{
    if(n<=1)
    {
        return;
    }
     merge_sort(input, 0, n-1);

}

int main()
{
  int arr[]={4,5,8,2,3,9,1};
  mergeSort(arr, 7);
  for(int i=0; i<7; i++)
    cout<< arr[i];
    return 0;
}
