// this program is of bubble sort array in which we check first two numbers and swap them with smaller one on the left side
// this is done turn wise turn
#include <iostream>

using namespace std;
void swapnumber(int*x, int*y)
{

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    }

void bubbleSort(int input[], int n)
{
    if((n==0)||(n==1))
        {
        return ;
        }
for(int i=0; i<n;i++){       // checking of the small number out first two
    if(input[i]>input[i+1])
        swapnumber(&input[i], &input[i+1]);
    bubbleSort(input, n-1);      // recursive call

}


}

int main()
{
int arr[]= { 2, 5, 6,8,3,7,4};
bubbleSort(arr,7);
for(int i=0; i<7; i++)
{
    cout<< arr[i];
}
    return 0;
}
