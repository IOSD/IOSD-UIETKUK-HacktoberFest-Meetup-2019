/*
0-1 knapsack using backtracking
*/

#include <iostream>
#include<algorithm>
using namespace std;
int c, bestP, cp, cw;
class Items{
        public:int P,W;
};
bool compare(Items &ob1,Items &ob2){
    return (ob1.P/ob1.W)>(ob2.P/ob2.W);
}
int bound(int i, int n,Items *ob)
{
    int cleft = c - cw;
    int b = cp;
    while (i < n && ob[i].W <= cleft)
    {
        cleft -= ob[i].W;
        b += ob[i].P;
        i++;
    }
    if (i < n)
    {
        b += (ob[i].P / ob[i].W) * cleft;
    }
    return b;
}
void knap(int i, int n,Items *ob)
{
    if (i > n - 1)
    {
        bestP = cp;
        return;
    }
    if (cw + ob[i].W <= c)
    {
        cw += ob[i].W;
        cp += ob[i].P;
        knap(i + 1, n,ob);
        cw -= ob[i].W;
        cp -= ob[i].P;
    }
    if (bound(i + 1, n,ob) > bestP)
    {
        knap(i + 1, n,ob);
    }
}
int main()
{
    int n;
    cout << "Enter number of items\n";
    cin >> n;
    Items ob[n];
    cout << "Enter weight array,then profit array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> ob[i].W;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ob[i].P;
    }
    sort(ob,ob+n,compare);
    cout << "Enter knapsack capacity\n";
    cin >> c;
    knap(0, n,ob);
    cout << "Maximum profit is " << bestP << endl;
    return 0;
}
