#include<stdio.h>
int main()
{
	int n=7;
	int arr[n];
	int i,loc;
	printf("Make your 7 element array\n");
	for(i=0;i<=6;i++)
		scanf("%d",&arr[i]);
	printf("Enter the location of element you want to delete\n");
	scanf("%d",&loc);
	for(i=loc-1;i<=n-1;i++)
		arr[i]=arr[i+1];
	printf("Your resultant array is\n");
	for(i=0;i<n-1;i++)
		printf("%d ",arr[i]);
	return 0;
	
}
