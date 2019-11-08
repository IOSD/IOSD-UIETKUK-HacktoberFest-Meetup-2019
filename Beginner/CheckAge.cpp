#include <iostream>
using namespace std;

int main()
{
    int p;
    cout << "Enter age : ";
    cin >> p;
    if ( p > 18)
        cout << "adult"<<endl;
    else if(p >10 && p <= 18)
        cout <<"teen"<<endl;
    else if(p < 10)
        cout <<"child "<<endl;
        // age 10 is not handle
    return 0;
}
