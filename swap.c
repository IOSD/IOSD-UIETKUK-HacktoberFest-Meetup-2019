#include <stdio.h>
 
int main()
{
  int x, y, t;
 
  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);
 
  printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
 
  t = x;
  x = y;
  y = t;
 
  printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
 
  return 0;
}

*swap without using third variable:
#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
