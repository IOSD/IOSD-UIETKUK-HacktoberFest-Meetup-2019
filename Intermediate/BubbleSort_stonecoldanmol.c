#include <stdio.h>
#include <stdlib.h>
//Bubble sort

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void BubbleSort(int A[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
            }
        }
    }
}


int main()
{
    //printf("Hello world!\n");
    int A[]={3,1,6,7,11,9,2,65},n=8,i;
    
    BubbleSort(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }


    return 0;
}
