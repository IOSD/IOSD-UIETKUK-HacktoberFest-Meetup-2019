#include<stdio.h>    
void main()    
{   
  int n1=0,n2=1,n3,i,n;
  printf("enter the number of elements in the sequence");
  scanf("%d",&n);
  if(n>=1) printf("%d ",n1);//for 1 element only 0 will be printed
  if(n>=2) printf("%d ",n2);//for 2 elemnets 0 1 will be printed
  for(i=3;i<=n;i++){
    n3=n1+n2;
    printf("%d ",n3);
    n1=n2;n2=n3;
  }
}
       
      
       
