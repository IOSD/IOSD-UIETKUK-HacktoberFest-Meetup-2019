#include<stdio.h>
void main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
 if(n>18)
 {
  printf("Adult");
 }
 else if(n>10 && n<=18) 
 { 
  printf("Teen");
 }
 else
 { 
  printf("child");
 }
 return 0;
 }
