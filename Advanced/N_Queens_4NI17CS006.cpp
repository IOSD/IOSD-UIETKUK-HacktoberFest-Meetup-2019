/*
NQueens Problem
*/
#include <iostream>
using namespace std;
int count = 1;
int place(int k, int j, int *X)
{
    for (int i = 1; i < k; i++)
        if (X[i] == j || X[i] - j == (i - k) || j - X[i] == (i - k))
            return 0;
    return 1;
}
void nqueens(int k, int n, int *X)
{
    for (int j = 1; j <= n; j++)
    {
        if (place(k, j, X))
        {
            X[k] = j;
            if (k == n)
            {
                cout << "Solution " << count << "\n";
                for (int i = 1; i <= n; i++)
                    cout << X[i] << " ";
                cout << endl;
                count++;
            }
            else
                nqueens(k + 1, n, X);
        }
    }
}
int main()
{
    int n;
    cout << "Enter number of queens\n";
    cin >> n;
    int X[n + 1];
    nqueens(1, n, X);
    return 0;
}
