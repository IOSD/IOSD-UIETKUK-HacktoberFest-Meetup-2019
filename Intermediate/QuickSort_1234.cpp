#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int Partition(int a[],int s,int e){
	int x=a[e];
	int i=s-1;
	for(int j=s;j<e;j++){
		if(a[j]<=x){
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[e]);
	return i;
}
void quickSort(int a[],int s,int e){
	if(s<e){
		int p=Partition(a,s,e);
		quickSort(a,s,p-1);
		quickSort(a,p+1,e);
	}
}
int main(){
	int n=7;
	int a[7]={10,80,30,90,50,60,70};
	int s=0;
	int e=6;
	
	quickSort(a,s,e);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
