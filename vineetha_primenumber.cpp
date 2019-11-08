#include <stdio.h>
#include <conio.h>
void main()
{
   int i, num, a = 0;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         a++;
      }
   }
   if(a==2)
   {
      printf("Entered number is %d "\
             "and it is a prime number.",num);
   }
   else
   {
      printf("Entered number is %d "\
             "and it is not a prime number.",num);
   }
}
