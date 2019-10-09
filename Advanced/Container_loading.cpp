/*
There are two containers with same capacity,here our aim is to load items into
the containers with maximum weight
*/

#include <iostream>
using namespace std;
int bestw, cw, r;
void loading(int n, int c, int w[], int x[], int i)
{
    if (i >=n)
    {
        if (cw >= bestw)
        {
            bestw = cw;
            return;
        }
    }
    r -= w[i];
    if (w[i] + cw <= c)
    {
        x[i] = 1;
        cw += w[i];
        loading(n, c, w, x, i + 1);
        cw -= w[i];
    }
    if (r + cw > bestw)
    {
        x[i] = 0;
        loading(n, c, w, x, i + 1);
    }
    r += w[i];
}
int main()
{
    int n, c;
    cout << "Enter number of iterms\n";
    cin >> n;
    int w[n], x[n];
    cout << "Enter weights of " << n << " items\n";
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        r += w[i];
    }
    cout << "Enter maximum weight of 2 containers\n";
    cin >> c;
    loading(n, c, w, x, 0);
    cout << "Best weight for container 1 is " << bestw << endl;
    return 0;
}
