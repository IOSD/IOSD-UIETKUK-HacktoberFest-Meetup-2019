#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of terms: "<<endl;
  cin>>n;
  int a=0,b=1;
  if(n==1){
    cout<<a<<endl;
  }
  else if(n==2){
    cout<<a<<" "<<b<<endl;
  }
  else{
    cout<<a<<" "<<b<<endl;
    for(int i=0;i<n-2;i++){
      c=a+b;
      a=b;
      b=c;
      cout<<" "<<c<<endl;
    }
  }
}
