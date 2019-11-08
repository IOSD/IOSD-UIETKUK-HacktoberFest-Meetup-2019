 #include<stdio.h>
 
 void main()
 {
   int n,i,j;
   printf("Enter a number to print a pattern: ")
    scanf("%d", &n);
    
    for(int i = n; i >= 1; i--)
   {
        for(int j = n; j > i; j--)
            printf("%d ", j);
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    for(int i = 1; i < n; i++)
    {
        for(int j = n; j > i; j--)
            printf("%d ", j);
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i + 1);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
  return 0;
 } 
