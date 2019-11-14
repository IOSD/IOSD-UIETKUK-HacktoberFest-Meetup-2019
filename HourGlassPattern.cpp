#include<iostream>
using namespace std;
int main(){
int n=5;
cout<<"Enter n=";
cin>>n;
int i,j,k;
for(i=0;i<=n;i++){
	
    for(j=0;j<i;j++)
        {
         cout<<"  ";
        }
    for(j=(n-i);j>=0;j--)
    {
        cout<<j<<" ";
    }
    for(j=1;j<=(n-i);j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
for(i=1;i<=n;i++){
	
    for(j=1;j<=(n-i);j++){

        cout<<"  ";
    }
    for(j=i;j>=0;j--){
        cout<<j<<" ";
    }
    for(j=1;j<=i;j++){
        cout<<j<<" ";
    }
     cout<<endl;
}


}
