#include <stdio.h>

void main(){
    int i, a = 0, b = 1, t, n;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("The fibonacci numbers upto %d are: \n", n);
    printf("%d\n%d\n",a, b);
    for(i = 3; i <= n; i++){
        t = a + b;
        printf("%d\n", t);
        a = b;
        b = t;
    }
}
