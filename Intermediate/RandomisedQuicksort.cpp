#include<iostream>
#include<cstdlib>
#include<ctime>

#define ll long long int 
using namespace std;



void shuffle(ll *a,ll s,ll e){
	srand(time(NULL));
	int i,j,temp;
	for(int i = e;i>0;i--){
		//create one random index
		j = rand()%(i+1);
		swap(a[i],a[j]);
	}
}





ll partition(ll *a,ll s,ll e){
	ll i = s-1;
	ll j = s;
	ll pivot = a[e];
	for(;j<e;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	//Bring the pivot element to the sorted element;
	swap(a[i+1],a[e]);
	return i+1;
}

void quicksort(ll *a,ll s,ll e){
	if(s>=e){
		return;
	}

	ll p = partition(a,s,e);
    
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);

}





int main(){
	ll n;
	cin>>n;
	ll a[10000000];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	shuffle(a,0,n-1);
    	for (int i = 0; i < n; i++)
	{
	cout<<a[i]<<" ";
	}
    cout<<endl;
	quicksort(a,0,n-1);
   for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
}
