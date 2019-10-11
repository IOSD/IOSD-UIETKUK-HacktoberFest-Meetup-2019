#include <iostream>
using namespace std;
void readmatrix(int a[][10],int R,int C)
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cin>>a[i][j];
        }
    }
}
void printmatrix(int a[][10],int R,int C)
{
     for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
}
void waveprintmatrix(int a[][10],int R,int C)
{
    for(int j=0;j<C;j++)
    {
        if(j&1)
        {
        for(int i=R-1;i>=0;i--)
        cout<<a[i][j]<<", ";
        }
        else
        for(int i=0;i<R;i++)
        cout<<a[i][j]<<", ";
    }
    cout<<"END";
}
int main() {
    int R,C,a[10][10];
    cin>>R>>C;
    readmatrix(a,R,C);
    waveprintmatrix(a,R,C);
    return 0;
}