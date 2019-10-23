#include <stdio.h>
int  main()
{
    int a[10], no, i, j, c, root, t;
 
    printf("\n Enter no of elements :");
    scanf("%d", &no);
    printf("\n Enter the no : ");
    for (i = 0; i < no; i++)
       scanf("%d", &a[i]);
    for (i = 1; i < no; i++)
    {
        c = i;
        do
        {
            root = (c - 1) / 2;             
            if (a[root] < a[c]) 
            {
                t = a[root];
                a[root] = a[c];
                a[c] = t;
            }
            c = root;
        } while (c != 0);
    }
 
    printf("Heap array : ");
    for (i = 0; i < no; i++)
        printf("%d\t ", a[i]);
    for (j = no - 1; j >= 0; j--)
    {
        t = a[0];
        a[0] = a[j];    
        a[j] = t;
        root = 0;
        do 
        {
            c = 2 * root + 1;    
            if ((a[c] < a[c + 1]) && c < j-1)
                c++;
            if (a[root]<a[c] && c<j)   
            {
                t = a[root];
                a[root] = a[c];
                a[c] = t;
            }
            root = c;
        } while (c < j);
    } 
    printf("\n the sorted array is : ");
    for (i = 0; i < no; i++)
       printf("\t %d", a[i]);
}
