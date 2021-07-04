#include<iostream>
using namespace std;

struct subsets{
	int parent;
	int rank;
};

int find(struct subsets *arr,int i){
	if(arr[i].parent != i){
		arr[i].parent = find(arr,arr[i].parent);
	}
	return arr[i].parent;
}

void Union(struct subsets *arr,int x,int y){
	int xset = find(arr,x);
	int yset = find(arr,y);
	if(xset != yset){
		if(arr[xset].rank < arr[yset].rank){
			arr[xset].parent = yset;
		}
		else if(arr[xset].rank > arr[yset].rank){
			arr[yset].parent = xset;
		}
		else {
			arr[yset].parent = xset;
			arr[xset].rank++;
		}
	}
}

int main(){
	int n = 10;
	struct subsets *s = new subsets[n];
	for(int i=0;i<n;i++){
		s[i].parent = i;
		s[i].rank = 0;
	}
	Union(s,3,4);
	Union(s,1,2);
	Union(s,2,5);
	Union(s,6,7);
	Union(s,1,7);

	for(int i=0;i<n;i++){
		cout<<s[i].parent<<" "<<s[i].rank<<"\n";
	}


	return 0;
}