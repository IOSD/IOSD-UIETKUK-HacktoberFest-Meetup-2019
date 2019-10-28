#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        char str[50];
        int i, l ,flag = 0;

        cout<<"\n Enter String to check palindrome: ";
        cin>>str;
        l = strlen(str);

        for(i=0;i < l ;i++)
        {
                if(str[i] != str[l-i-1])
                {
                        flag = 1;
                        break;
                }
        }
        if(flag)
        {
            cout<<"Entered string is not a palindrome"<<endl;
        }
        else
        {
            cout<<"Entered string is a palindrome"<<endl;
        }
    return 0;
}
