#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,t;
    int s[50],n;
    printf("Number of element followed by elements to sort : ");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&s[k]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(s[j]>s[j+1])
            {
                t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
    }
    for(k=0;k<n;k++)
    {
        printf("%d\t",s[k]);
    }

    return 0;
}
