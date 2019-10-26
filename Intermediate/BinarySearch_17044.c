#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,t,p;
    int s[50],n;
    int l,h,mid;
    printf("Number of element followed by Integers to consist the array : ");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&s[k]);
    }

    printf("Enter element to search in the Array : ");
    scanf("%d",&p);
    //Bubble Sort
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
    //Binary Search
        l = 0;
        h = n - 1;
        mid = (l+h)/2;

    while (l <= h) {
        if (s[mid] < p)
            l = mid + 1;
        else if (s[mid] == p) {
                printf("%d found in the Array\n\n", p);
                break;
            }
        else
            h = mid - 1;
            mid = (l + h)/2;
        }
       if (l > h)
            printf("%d is not Present in the Arrey \n", p);
        return 0;
}
