#include <iostream>
using namespace std;

int main()
{
    int p;
    cout << "Enter an integer to check: ";
    cin >> p;
    if ( p % 2 == 0)
        cout << p << " is Not odd";
    else
        cout << p << " is odd";
    return 0;
}
