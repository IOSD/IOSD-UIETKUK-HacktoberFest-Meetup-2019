#include<bits/stdc++.h>
using namespace std;

void isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            cout<<str<<" is not a palindrome";
            return;
        }
    }
    cout<<str<<" is palindrome";
}

int main()
{
    string s;
    cin>>s;
    isPalindrome(s);
    return 0;
}
