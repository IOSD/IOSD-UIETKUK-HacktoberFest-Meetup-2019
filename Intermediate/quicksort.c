#include <stdio.h>
int call_partition=0; /*variable to store the number of times the partition function is called*/
int pindex_last_element;/*variable to store the index of the last element in the sorted array*/
void swap(long long int A[],int p1,int p2) /*function to swap two elements of an array*/
{
	int temp=A[p1];
	A[p1]=A[p2];
	A[p2]=temp;
}


int partition(long long int A[],int start,int end)
{
	call_partition++;/*incrementing the number of time the partition function is called*/
	int pivot=A[end];
	int pindex=start;
	for (int i=start;i<=end-1;i++)
	{
		if (A[i]<pivot)
		{
			swap(A,pindex,i); /*arranging of numbers less than pivot to the left and greater numbers than pivot to the right*/
			pindex++;
		}
	}
	swap(A,pindex,end); /*swapping of the pivot to its right place*/
	if (call_partition==1)
		pindex_last_element=pindex; /*if this is the first call of the partition function then assign the pivot index to pindex_last_element which finally needs to be printed as output*/
	return pindex;
}


void quick_sort(long long int A[],int start,int end)
{
	if (start<end)
	{
		int pindex=partition(A,start,end); /*quick sort function to break the array into smaller and smaller parts and sort them*/
	        quick_sort(A,start,pindex-1);
	        quick_sort(A,pindex+1,end);
	}
}

int main(void)
{
  int n;
  printf("enter the number of integers to be entered: ")
  scanf("%d",&n);
	long long int A[n];
  printf("enter the integers seperated by comma\n")
  for (int i=0;i<n;i++)
		scanf("%lld,",&A[i]);
	quick_sort(A,0,n-1);
	for (int i=0;i<n;i++)
		printf("%lld ",A[i]);
	printf("\n%d",pindex_last_element);
}
