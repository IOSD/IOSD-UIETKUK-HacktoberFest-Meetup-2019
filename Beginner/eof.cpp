// Read all the numbers till end of file(EOF)

#include<iostream>
using namespace std;

int main(){
			int num;
			cout<<"Enter the numbers:";

			while(scanf("%d",&num)!=EOF){
				cout<<num*num<<endl;
			}
			return 0;
}
