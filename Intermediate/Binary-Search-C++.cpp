#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cout << "Input number of elements:  ";
    cin >> n;
    cout << "\n";
    
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    
    int x = 0;
    cout << "Find which number? ";
    cin >> x;
    cout << "\n";
    
    int l = 0;
    int r = n-1;
    int m = (l + r) / 2;
    while(l <= r){
        if(x == arr[m]){
            cout << "Number at index " << m << "\n";
            return 0;
        }
        else if(x < arr[m]) r = m - 1;
        else l = m + 1;
        m = (l + r) / 2;
    }
    
    cout << "Number not found\n";
    
}
