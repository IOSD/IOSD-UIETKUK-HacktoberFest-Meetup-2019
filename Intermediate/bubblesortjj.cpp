#include <iostream>
using namespace std;
int main()
{
   int AR[25],N;
   int i,j,temp;
   cout<<"How many elements";
   cin>>N;
   cout<<"Enter the array elements: ";
   for(i=0;i<N;i++)
       cin>>AR[i];
   for(i=1;i<N;i++)
       for(j=0;j<N-i;j++)
           if(AR[j] > AR[j+1])
           {
               temp=AR[j];
               AR[j]=AR[j+1];
               AR[j+1]=temp;
           }
   cout<<"Sorted array is: ";
   for(i=0;i<N;i++)
       cout<<AR[i]<<"\t";
}
       
               
   
