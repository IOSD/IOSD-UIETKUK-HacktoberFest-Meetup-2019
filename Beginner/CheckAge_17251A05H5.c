#include<stdio.h>
void main()
{
    int age ;
    printf("enter the age");
    scanf("%d",&age);
    if(age>18) printf("adult");
    else if(age>10 && age<=18) printf("teen");
    else if(age<10) printf("child");
    
}
