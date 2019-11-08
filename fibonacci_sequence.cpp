#include<stdio.h>
#include<math.h>
main()
{
	int i,s,n,next=1,previous=0;
	printf("enter the number = ");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\n0");
	}
	else
	{
		if(n==2)
		{
		   printf("\n0 1");	
		}
		else
		{ 
		   printf("\n0 1");
	       for(i=0;i<n-2;i++)
	       {
	           s=previous+next;
	           printf(" %d",s);
	           previous=next;
		       next=s;
			}
		}
	}
}
