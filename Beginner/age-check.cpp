#include<bits/stdc++.h>

using namespace std;

int main()
{
  int age;
   cout<<"Enter the age"<<endl;
   cin>>age;
   if(age < 10 )
      {
        cout<<"child";
       }
   else if ( age > 10 && age <= 18 )
       {
         cout<<"teen" ;
       }
   else {
          cout<<"adult";

        }

     return 0;
}
