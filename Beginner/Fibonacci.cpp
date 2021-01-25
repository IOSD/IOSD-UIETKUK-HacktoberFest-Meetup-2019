#include<stdio.h>

using namespace std;

int main()
{
    int n = 0;
    cout << "Input number of terms:";
    cin >> n;
    cout << "\n";

    cout << "Fibonacci Sequence: ";

    int a = 0, b = 1, c = 0;
    for (int i = 1; i <= n; i++){
        if(i == 1){
            cout << " " << a;
            continue;
        }
        else if(i == 2){
            cout << " " << b;
            continue;
        }
        else{
            c = a + b;
            a = b;
            b = c;
            cout << " " << c;
        }
    }

}
