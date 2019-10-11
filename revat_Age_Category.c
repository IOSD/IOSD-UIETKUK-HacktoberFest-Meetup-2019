#include<stdio.h>
int main()
{
  int n;
  printf("Enter The Age: \n");
  scanf("%d",&n);
  
  if(n>18)
  printf("ADULT");
  
  if(10<n)
  printf("TEEN");
  
  else
  printf("CHILD");
  
}
