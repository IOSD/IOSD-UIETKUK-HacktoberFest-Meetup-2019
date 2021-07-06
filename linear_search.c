#include<stdio.h>
int main()
{
	int a[11]={45,36,36,48,6,455,55,78,55,545,63},x,i=0;
	printf("enter the number you want to search\n");
	scanf("%d",&x);
	a[11]=x;
	while(a[i]!=a[11])
	{
		i++;
	}	
	if(i==11)
	{
		printf("item not found");
	}
	else
	printf("the entered element is at the loc=%d\n",i+1);
}
