#include<iostream.h>
#include<conio.h>
void main()
{
    int age;
    cout<<"Enter the age\n";
    cin>>age;
 if(age>18)
 cout<<"adult";
 else if((age<18)&&(age>10))
 cout<<"teen";
 else
 cout<<"child";
 getch();
    }
