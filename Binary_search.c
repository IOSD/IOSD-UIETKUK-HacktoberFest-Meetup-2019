#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[50],i,n,loc=0,beg=0,end,mid,item;
  clrscr();
  printf("ENTER NUMBER OF ELEMENT\n");
  scanf("%d",&n);
  end=n-1;
  printf("ENTER ELEMENT IN SORTED ORDER\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("ENTER ELEMENT TO BE SEARCHED\n");
  scanf("%d",&item);
  while(beg<=end)
   {
     mid=((beg+end)/2);
     if(arr[mid]<item)
       beg=mid+1;
     else if(arr[mid]==item)
     {
       printf("%d FOUND AT LOCATION %d.\n",item,mid+1);
       break;
     }
     else
       end=mid-1;
     mid=(beg+end)/2;
   }

   if(beg>end)
     printf("ITEM NOT FOUND!!");
   getch();
}
