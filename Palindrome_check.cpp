#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "";
    cout << "Enter the string:";
    cin >> s;

    int l = 0;
    int r = s.length() - 1;

    while(r > l){
        if(s[l++] != s[r--]){
            cout << "Not a Palindrome" << "\n";
            return 0;
        }
    }

    cout << "Palindrome" << "\n";

}
