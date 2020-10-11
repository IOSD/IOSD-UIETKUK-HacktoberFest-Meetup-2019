#include <stdio.h>

int main()
{
    int num, flipno;

  
    printf("Enter any number: ");
    scanf("%d", &num);

    flipno = ~num;

    printf("actualno = %d\n", num);
    printf("Number after flipping bits = %d", flipno);

    return 0;
}
