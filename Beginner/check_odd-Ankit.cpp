#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"enter the number to be checked"<<endl;
   cin>>n;
   if(n % 2 == 0)
      cout<<n<<" is not odd";
   else
      cout<<n<<" is odd";
   return 0;
}
