#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    if(age > 18)
        printf("adult\n");
    else if(age>10 && age <=18)
        printf("teen");
    else if(age<10)
        printf("child");
    // what if age == 10 , Not specified
    return 0;
}
