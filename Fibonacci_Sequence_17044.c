#include <stdio.h>
#include <stdlib.h>
int main()
{
    int f1 = 0,f2 = 1,i,nxt,n;
    printf("Fibonacci Sequence up to term ? : ");
    scanf("%d",&n);
    for(i=1;i<n+1;++i)
    {
        printf("%d\t",f1);
        nxt = f1+f2;
        f1 = f2;
        f2 = nxt;
    }
    return 0;
}
