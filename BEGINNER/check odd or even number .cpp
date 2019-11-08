#include <iostream.h>
using namespace std;

int main(){
    int num;
    cout << "Enter a number to check if it is even or odd: " << endl;
    cin << num;
    
    if (num % 2 == 0){
       cout << num << " is even" << endl;
    }else{
       cout << num << " is odd" << endl;
    }
    return 0;
}
