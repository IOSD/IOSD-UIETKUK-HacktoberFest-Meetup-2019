/* To print all the subarrays of a given array */

#include<iostream>
using namespace std;

int main(){
				int n;
			cout<<"Enter the total number of elements:"<<endl;
			cin>>n;

			int a[1000];

			for(int i=0; i<n;i++){
				cin>>a[i];

			}
			cout<<"All the subarray of given array are:"<<endl;

			for(int i=0;i<n;i++){

			for(int j=i;j<n;j++){

				for(int k=i; k<=j;k++){

					cout<<a[k];
				}
				cout<<endl;
			}
			}



}
