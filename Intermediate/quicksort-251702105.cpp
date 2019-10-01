#include<bits/stdc++.h>

using namespace std;

void swap (int *a, int *b){
	int temp = *a;
	*a= *b;
	*b = temp;
}


int partition(int *arr, int s, int e){
	int pivot = arr[e];
	int i = s-1;
	
	for(int j=s; j<e; j++){
		if(arr[j] <= pivot){
			i = i+1;
			swap(arr[i] , arr[j]);
			
		}
		
	}
	
	swap(arr[i+1], arr[e]);
	return i+1;
}
void quickSort(int arr[], int s, int e){
	
	if(e<=s){
		return;
	}
	int pi = partition(arr, s, e);
	
	quickSort(arr, s, pi-1);
	quickSort(arr, pi+1, e);
	
}


int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	quickSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

