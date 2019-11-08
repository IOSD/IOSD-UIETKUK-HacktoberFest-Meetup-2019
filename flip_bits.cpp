#include <bits/stdc++.h>
using namespace std;

void invertBits(int num)
{
    int x = log2(num) + 1;

    for (int i = 0; i < x; i++)
       num = (num ^ (1 << i));

    cout << num;
}

// Driver code
int main()
{
    int num = 26;
    invertBits(num);
    return 0;
}
