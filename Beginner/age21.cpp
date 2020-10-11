#include <iostream.h>
using namespace std;

int main(){
int age;
cin>>age;
if(age>18){
cout<<"adult";
}else if(age>10&&age<=18){
cout<<"teen";
}else{
cout<<"child";
}
}
