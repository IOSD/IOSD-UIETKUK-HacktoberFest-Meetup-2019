#include <stdio.h>
void main (){
	int n;
	printf("Enter an integer:");
	scanf("%d", &n);
	if (n % 2==0)
	 printf("%d is not odd", n);
	else
	 printf("%d is odd",n); 
}
