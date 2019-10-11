#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int i,j,arr[100],temp,size; 
	cout<<"enter the size of the array\n";
	cin>>size;
	cout<<"\nenter the array";
	for(i=0;i<size;i++){
		cin>>arr[i];
		}
		
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout<<"sorted array is-";
	for(i=0;i<size;i++){
		cout<<arr[i]<<"\n";
	}
	system("PAUSE");
	getch();
	return 0;
}
