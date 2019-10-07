#include <iostream>   
 using namespace std;
         
int main()                            
{
  int age;                           
  cout<<"Please input your age: ";   
  cin>> age;                                              
  if ( age <= 10) 
  {                  
     cout<<"You are a child.\n"; 
  }
  else if (10<age<=18 ) 
  {             
     cout<<"You are a teen.\n";           
  }
  else 
  {
    cout<<"You are an adult.\n";     
  }
}
