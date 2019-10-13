#include <stdio.h>
int main()
{
	int a;
	printf("Enter the age");
	scanf("%d",&a);
	if (a<=10)
	{
		printf("CHILD");
	}
	else if ((a>10)&&(a<=18))
	{
		printf("TEEN");

	}
	else
	{
		printf("ADULT");
	}
	
	return 0;
}
