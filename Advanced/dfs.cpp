// A Quick implementation of dfs using vectors

// Its time complexity is O(v+e).where v is number of vertex and e is number of edges.

#include <bits/stdc++.h>
#define pb push_back

using namespace std;

bool v[10]={0};
vector<int> g[20];

void edge(int a, int b)
{
    g[a].pb(b);
 
    g[b].pb(a); // for undirected graph add this line
}

void dfs(int u)
{
 
 v[u]=true;

cout<<u<<endl;
 for (auto x:g[u]){
   if (!vis[x]){

    dfs(x);
}
 }

}


int main()
{
    cout<<"Number of vertices<<endl;
    int n;cin>>n;
    cout<<"Number of edges"<<endl;
    int e;cin>>e;

    int a, b;
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        edge(a, b);
    }
    dfs(1);
   

    return 0;
}
