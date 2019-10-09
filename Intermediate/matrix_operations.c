#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("WHICH OPERATION YOU WANT TO CHOOSE ?\n");
  printf("1. Addition of matrix\n");
  printf("2. Subtraction of matrix\n");
  printf("3. Multiplication of matrix\n");
  printf("4. Transpose of matrix\n");
  scanf("\n%d",&n);
  printf("\n\n");

switch(n)
{
  case 1:
  {
   int rows,columns,i,j,a[10][10],b[10][10],sum[10][10];
   printf("enter no. of rows and columns\n");
   scanf("%d%d",&rows,&columns);
   printf("enter elements of first matrix\n");
   for(i=0;i<rows;i++)
   for(j=0;j<columns;j++)
   {
     printf("enter element a%d%d: ",i+1,j+1);
     scanf("%d",&a[i][j]);
   }
   printf("enter elements of second matrix\n");
   for(i=0;i<rows;i++)
   for(j=0;j<columns;j++)
   {
     printf("enter element a%d%d: ",i+1,j+1);
     scanf("%d",&b[i][j]);
   }
   for(i=0;i<rows;i++)
   for(j=0;j<columns;j++)
   {
     sum[i][j]=a[i][j]+b[i][j];
   }
   printf("sum of entered matrices\n");
   for(i=0;i<rows;i++)
   for(j=0;j<columns;j++)
   {
     printf("%d\t",sum[i][j]);
     if(j==columns-1)
      {
       printf("\n\n");
      }
   }
  }
  break;
case 2:
  {
   int rows,columns,i,j,a[10][10],b[10][10],diff[10][10];
   printf("enter no. of rows and columns\n");
   scanf("%d%d",&rows,&columns);
   printf("enter elements of first matrix\n");
   for(i=0;i<rows;i++)
   for(j=0;j<columns;j++)
   {
     printf("enter element a%d%d: ",i+1,j+1);
     scanf("%d",&a[i][j]);
   }
   printf("enter elements of second matrix\n");
   for(i=0;i<rows;i++)
   for(j=0;j<columns;j++)
   {
     printf("enter element a%d%d: ",i+1,j+1);
     scanf("%d",&b[i][j]);
   }
   for(i=0;i<rows;i++)
   for(j=0;j<columns;j++)
   {
     diff[i][j]=a[i][j]-b[i][j];
   }
   printf("difference of entered matrices\n");
   for(i=0;i<rows;i++)
   for(j=0;j<columns;j++)
   {
     printf("%d\t",diff[i][j]);
     if(j==columns-1)
     {
	printf("\n\n");
     }
   }
  }
 break;
case 3:
  {
   {
    int m, n, p, q, c, d, k;
    int first[10][10], second[10][10], multiply[10][10];
    printf("Enter number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of first matrix\n");
    for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
	 scanf("%d", &first[c][d]);
    printf("Enter number of rows and columns of second matrix\n");
	 scanf("%d%d", &p, &q);
    if (n != p)
      printf("The matrices can't be multiplied with each other.\n");
    else
    {
      printf("Enter elements of second matrix\n");
      for (c = 0; c < p; c++)
       for (d = 0; d < q; d++)
	scanf("%d", &second[c][d]);
      for (c = 0; c < m; c++) {
       for (d = 0; d < q; d++) {
	multiply[c][d]=0;
	 for (k = 0; k < n; k++) {
	  multiply[c][d]+=first[c][k]*second[k][d];
	}
       }
      }
      printf("Product of the matrices:\n");
      for (c = 0; c < m; c++) {
       for (d = 0; d < q; d++)
	printf("%d\t", multiply[c][d]);
      printf("\n");
    }
   }
  }
 break;
case 4:
  {
    int a[10][10],transpose[10][10],rows,columns,i,j;
    printf("enter no. of rows and columns: ");
    scanf("%d%d",&rows,&columns);
    printf("enter elements of matrix: \n");
     for(i=0;i<rows;i++)
      for(j=0;j<columns;j++)
      {
	printf("enter element a%d%d: ",i+1,j+1);
	  scanf("%d",&a[i][j]);
      }
    printf("\nentered matrix:  \n");
    for(i=0;i<rows;i++)
     for(j=0;j<columns;j++)
     {
      printf("%d  ",a[i][j]);
      if(j==columns-1)
       printf("\n\n");
     }
    for(i=0;i<rows;i++)
     for(j=0;j<columns;j++)
     {
      transpose[j][i]=a[i][j];
     }
    printf("\ntranspose of matrix : \n ");
     for(i=0;i<rows;i++)
      for(j=0;j<columns;j++)
      {
	printf("%d  ",transpose[i][j]);
	if(j==columns-1)
	printf("\n\n");
      }
    }
  default:
    printf("invalid choice");
   }
 }
getch();
}




