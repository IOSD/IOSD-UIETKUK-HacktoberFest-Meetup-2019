#include<iostream.h>
#include<conio.h>

void oddeven_checker(int n)
 {
   if (n%2 != 0)
    {
     cout<<"\n Number is Odd";
    }
   else
    cout<<"\n Number is Even";
 }

 void main()
 {
  clrscr();
  int no;
  cout<<"\n Enter the number to check whether even or odd :\t ";
  cin>>no;
  oddeven_checker(no);
  getch();

  }
