#include<iostream.h>
#include<conio.h>
void main()
 {
  int a;
  cout<<"enter age -";
  cin>>a;
  if(a>18)
   {
    cout<<"adult";
   }
  else if(a>10&&a<=18)
   {
    cout<<"Teen";
   }
  else 
   {
    cout<<"child"
   }
  getch()
 }
