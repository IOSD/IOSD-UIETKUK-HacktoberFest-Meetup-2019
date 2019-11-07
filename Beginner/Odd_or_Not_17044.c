#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
   printf("Enter a number to check whether is Odd or Not :");
   scanf("%d",&n);
   if(!(n%2==0))
   {
       printf("Number is Odd");
   }
   else
    printf("Number is Not Odd");
    
    return 0;
}
