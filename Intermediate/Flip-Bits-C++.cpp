#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cout << "Input number:";
    cin >> n;
    cout << "\n";
    
    string b = "";
    while(n != 0){
        b = (n%2==0 ? "0":"1") + b;
        n /= 2;
    }
    
    for(int i = 0; i < b.length(); i++){
        if (b[i] == '0') b[i] = '1';
        else b[i] = '0';
    }
    
    int num = 0;
    for(int i = 0; i <= b.length()-1; i++){
        
        if(b[i] == '1'){
            num += pow(2, b.length()-1-i);
        }
    }
    
    cout <<"Bits flipped: " << num << "\n";
    
}
