#include <iostream>

using namespace std;

int main()
{
   int age;
   cin>>age;
   if(age>18)
   cout<<"Adult";
   else if(age>10 && age<=18)
   cout<<"Teen";
   else if(age<=10)
   cout<<"child";
   
   return 0;
}
