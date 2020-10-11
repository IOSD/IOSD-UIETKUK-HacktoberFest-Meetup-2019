#include<bits/stdc++.h>
using namespace std;
void pali(char s[])
{
  int i=0;
  int siz = strlen(s) - 1;
  while(siz>i)
  {
    if(s[i++] != s[siz--])
    {
      cout<<"NOT PALINDROME"<<"\n";
      return;
    }
   } 
   cout<<"PALINDROME"<<"\n";
}
int main()
{
    string s;
    cin>>s;
    pali(s);
    return 0;
}
