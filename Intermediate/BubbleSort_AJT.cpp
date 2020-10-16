#include<stdio.h>
void bubblesort(int a[],int n)
{
	int i,j,k,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		printf("The resultant array in this iteration is\t");
		for(k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}
void main()
{
	int a[30],k,i;
	printf("Enter the number of elements:\t");
	scanf("%d",&k);
	printf("Enter the elements:");
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	bubblesort(a,k);
}
