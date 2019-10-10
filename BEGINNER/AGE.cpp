#include<iostream.h>
#include<conio.h>
void main()
{
    int age;
    cout<<"Enter the age\n";
    cin>>age;
 if(age>18)
 cout<<"adult";
 if((age<18)&&(age>10))
 cout<<"teen";
 if(age<10)
 cout<<"child";
 getch();
    }
