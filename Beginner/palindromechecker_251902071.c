#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int i,l;
	int f=0;
	printf("Enter the string to be checked if it is a palindrome or not!!");
	scanf("%s",a);
	l=strlen(a);
	for (i=0;i<l;i++)
	{
		if (a[i]!=a[l]){
			f=1;
			break;
		}
		
	}
	if(f)
	{
		printf("OOPS! %s is NOT a palindrome",a);
	}
	else{
		printf("%s is a palindrome",a);
	}
}



