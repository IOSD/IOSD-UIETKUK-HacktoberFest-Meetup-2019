#include <stdio.h>
 
int main()
{
  int a[100], n,i,j, c,d,loc, x, temp;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i= 0;i < n;i++)
    scanf("%d", &a[i]);
  printf("sele 1  ,bubble 2  insertion3\n");
scanf("%d",&x);
switch(x)
{
 case 1:

  for (i= 0;i < (n - 1);i++)
  {
    loc=i;
   
    for (j=i + 1;j < n;j++)
    {
      if (a[loc] > a[j])
        loc=j;
    }
    if (loc!=i)
    {
      temp = a[i];
      a[i] = a[loc];
      a[loc] = temp;
    }
  }
 

  
 
 break; 


case 2:
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] > a[d+1]) /* For decreasing order use < */
      {
        temp       = a[d];
        a[d]   = a[d+1];
        a[d+1] = temp;
      }
    }
  }
 

break; 

case 3:

 for (c =1;c< n;c++) {
    d = c;
 
    while ( d > 0 && a[d-1] > a[d]) {
      temp   = a[d];
      a[d]   = a[d-1];
      a[d-1] = temp;
 
      d--;
    }
  }
 break ; }

  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", a[c]);
  }




return 0;

}
