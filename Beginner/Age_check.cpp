#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if( age > 18 ){
        cout<<"You are an adult";
    }
    else if( age > 10 && age <= 18 ){
        cout<<"You are a teen";
    }
    else{
        cout<<"You are a child";
    }
    return 0;
}
