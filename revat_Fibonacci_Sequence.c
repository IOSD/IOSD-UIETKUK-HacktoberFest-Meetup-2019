#include<stdio.h>
int main()
{
  int a=0,b=1,c,n;
  printf("Enter the no. of terms of Fibonacci Sequence: \n");
  scanf("%d",&n);

  printf("%d",a);
  printf("%d",b);
  for(int i=0;i<n-2;i++)
  {
	c=a+b;
	printf("%d",c);
	a=b;
	b=c;
  }
}
