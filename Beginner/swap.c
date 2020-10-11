#include<stdio.h>
#include<conio.h>
void swapv(int x,int y)
{
int z;
z=x;
x=y;
y=z;
printf("values after swapping are: \na=%d \nb=%d",x,y);
}
void swapr(int *x,int *y)
{
int z;
z=*x;
*x=*y;
*y=z;
printf("\n values after swapping are: \na=%d \nb=%d",*x,*y);
}
void main()
{
int a,b,c,n;
clrscr();
printf("1. SWAP USING THIRD VARIABLE\n");
printf("2. SWAP WITHOUT USING THIRD VARIABLE\n");
printf("3. SWAP USING CALL BY REFERENCE METHOD \n");
printf("4. SWAP USING CALL BY VALUE METHOD \n");
printf("ENTER YOUR CHOICE(1-4):");
scanf("%d",&n);
printf("ENTER THE TWO VALUES FOR SWAP:\na=");
scanf("%d",&a);
printf("\nb=");
scanf("%d",&b);
switch(n)
{
case 1: c=a;
		  a=b;
		  b=c;
		  printf("VALUES AFTER SWAPPING ARE :\na=%d \nb=%d",a,b);
		  break;
case 2: a=a+b;
		  b=a-b;
		  a=a-b;
		  printf("VALUES AFTER SWAPPING ARE :\na=%d \nb=%d",a,b);
		  break;
case 3: swapr(&a,&b);
		  printf("\n ORIGINAL VALUES AFTER SWAPPING ARE :");
		  printf("\na=%d \nb=%d",a,b);
		  break;
case 4: swapv(a,b);
		  printf("ORIGINAL VALUES AFTER SWAPPING ARE :");
		  printf("\na=%d \nb=%d",a,b);
		  break;
default:printf("ENTER A VALID CHOICE!");
}
getch();
}

