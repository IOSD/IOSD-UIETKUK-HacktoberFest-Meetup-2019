#include<iostream>
using namespace std;
int main(){
    int n,i=1,val,j;
    cout<<"Enter number of rows:";
    cin>>n;
    while(i<=n){
j=1;
while(j<=n-i){
    cout<<" ";
    j++;
}
val=i;
while(j<=n){
    cout<<val;
    val++;
j++;
}cout<<endl;
i++;
    }
    return 0;
}

