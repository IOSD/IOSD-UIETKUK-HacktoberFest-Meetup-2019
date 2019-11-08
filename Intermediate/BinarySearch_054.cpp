#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int i,j,arr[100],temp,size,n,l,h,mid,flag=0,pos; 
	cout<<"enter the size of the array\n";
	cin>>size;
	cout<<"\nenter the array";
	for(i=0;i<size;i++){
		cin>>arr[i];
		}
		
	cout<<"enter the no. to search";
	cin>>n;
	
	l=0;
	h=size-1;

	while(l<=h){
		mid = (l+h)/2;
		if(n==arr[mid]){
			flag = 1;
			pos = mid;
			break;
		}
		
		else if(n>arr[mid]){
			l = mid+1;
		}
		
		else if(n<arr[mid]){
			h = mid-1;
		}
	}
	
	if(flag==1){
		cout<<"element found at position"<<pos+1;
	}
	else{
		cout<<"element not found";
	}
	
	system("PAUSE");
	getch();
	return 0;
}
