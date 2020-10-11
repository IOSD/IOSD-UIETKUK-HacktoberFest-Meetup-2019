#include<iostream>
using namespace std;
int main()
{
    char str[1000];
    cin.getline(str,1000);
    int start=0;
    int i=0;
    for(i=0;str[i]!=0;i++);
    int end=i-1;
    while(start<end)
    {
        if(str[start]!=str[end])
	{
           cout<<"Is not a Palindrome"<<endl;     
           return 0;
    }
    start++;
    end--;
    }
    cout<<"Is Palindrome"<<endl;
}
