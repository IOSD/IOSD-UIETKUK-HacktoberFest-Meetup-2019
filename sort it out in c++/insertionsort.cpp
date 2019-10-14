#include <iostream> 
using namespace std; 
  
void isort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
int main()  
{  
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    isort(arr, n);  
     for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    return 0;  
}  
