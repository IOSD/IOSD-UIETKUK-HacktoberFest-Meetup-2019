// Program to create a spiral matrix by entering order of matrix (it is a square matrix)

#include<stdio.h>
#include<conio.h>
main()
{
	int i=0,j=0,s=0,n,A[100][100],a=0;
	
	printf("Enter no. of rows or columns of the square matrix = ");
	scanf("%d",&n);
	
	do
	{		
		a+=1;
		
		for(j;j<=n-a;j++)
		{
			s+=1;
			A[i][j]=s;
		}
		
		j-=1;
		for(i+=1;i<=n-a;i++)
		{
			s+=1;
			A[i][j]=s;
		}
		i-=1;
		
		for(j-=1;j>=a-1;j--)
		{
			s+=1;
			A[i][j]=s;
		}
		j+=1;
		
		for(i-=1;i>a-1;i--)
		{
			s+=1;
			A[i][j]=s;
		}
		j+=1;
		i+=1;
		
    }while(a<n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",A[i][j]);
		
		printf("\n");
	}
getch();
}
