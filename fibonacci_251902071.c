#include<stdio.h>

int main()
{
	int c, first_term=0,second_term=1,next_term,i;
	printf("Enter the number of terms !!!!!");
	scanf("%d",&c);
	printf("The required Fibonacci sequence is :\n");
	for (int i = 0; i<c; i++)
	{
		if (i<=1)
			next_term=i;
		else
			{
				next_term=first_term+second_term;
				first_term=second_term;
				second_term=next_term;
			}
			printf("%d\n",next_term);


	}
	return 0;
}
