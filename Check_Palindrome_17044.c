#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int l,m,n,length=0;
    gets(s);
    while(s[length] != '\0')
    {
        length++;
    }
    n = length-1;
    m = length/2;
    for (l = 0; l<m; l++)
      {
        if (s[l]!= s[n])
        {
            printf("Input String is not palindrome.\n");
            break;
        }
    n--;
      }
    if (l==m)
      {
        printf("Input string is Palindrome.\n");
      }
    return 0;
}
