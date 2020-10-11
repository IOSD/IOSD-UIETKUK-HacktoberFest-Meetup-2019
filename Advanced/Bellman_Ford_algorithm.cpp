#include<bits/stdc++.h>
using namespace std;
void BellmanFord(int graph[n][m],int V,int E,int s)
{
   int dis[V];
   for(int i=0;i<V;i++)
   {
      dis[i]=INT_MAX;
   }
   dis[s]=0;
   for(int i=0;i<V-1;i++)
   {
      for(int j=0;j<E;j++)
      {
          if(dis[graph[j][0]]+graph[j][2]<dis[graph[j][1]])
          {
              dis[graph[j][1]]=dis[graph[j][0]]+graph[j][2];
          }
      }
   }
   for(int i=0;i<E;i++)
   {
      int x=graph[i][0];
      int y=graph[i][1];
      int weight=graph[i][2];
      if(dis[x]!=INT_MAX && dis[x]+weight<dis[y])
      {
         cout << -1 << endl;
      }
   }
   cout << "Vertetx distance from source" << endl;
   for(int i=0;i<V;i++)
   {
       cout << i << "\t\t" << dis[i] << endl;
   }
}
int main()
{
   int V,E;
   cin >> V >> E;
   int n,m;
   cin >> n >> m;
   int graph[n][m];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
          cin >> graph[i][j];
      }
   }
   BellmanFord(graph,V,E,0);
   return 0;
}
