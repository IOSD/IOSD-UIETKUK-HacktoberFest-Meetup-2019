#include<iostream>
using namespace std;


int main(){
     //To print a square of n rows and columns using stars
    int n,i;
    cin>>n; //input no of rows of the square
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<"*";
        cout<<endl;
    }
    
  
}

