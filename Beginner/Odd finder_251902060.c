#include <stdio.h>
main (){
	int number;
	printf("Enter an integer:",number);
	scanf("%d", &number);
	if (number % 2==0)
	 printf("%d is even", number);
	else
	 printf("%d is odd",number); 
}
