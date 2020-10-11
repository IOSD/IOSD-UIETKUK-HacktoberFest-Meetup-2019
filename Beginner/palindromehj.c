#include <stdio.h>
int main()
{
    int n, a = 0, r, b;
    printf("Enter an integer: ");
    scanf("%d", &n);
    b = n;
    
    while( n!=0 )
    {
        b= n%10;
        a = a*10 + r;
        n /= 10;
    }
    
    if (b == a)
        printf("%d is a palindrome.", b);
    else
        printf("%d is not a palindrome.", b);
    
    return 0;
}
