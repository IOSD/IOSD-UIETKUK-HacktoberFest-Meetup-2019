#include <iostream>

using namespace std;

int main()
{
    int age = 18;
    cout << "please enter age\n";
    cin >> age;
        if(age >= 18){
            cout << "Adult";
        }
        else {
        cout << "teenager";
        }
        if(age < 13){
            cout << "child";
        }
        else {
            cout << "something's wrong";
        }

    return 0;
}
