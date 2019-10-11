//Input The Age, if age > 18 print adult , if 10 < age <= 18 print teen, if age < 10 print child
int main(){
  int age;
  cin>>age;
  if(age>18){
    cout<<"Adult"<<endl;
  }
  else if(age<10){
    cout<<"Child"<<endl;
  }
  else{
    cout<<"Teen"<<endl;
  }
}
