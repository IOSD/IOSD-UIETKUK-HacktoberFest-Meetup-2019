#include<bits/stdc++.h>
using namespace std;

class Graph{
	int n;
	vector<int> *adj;
public:
	Graph(int d)
	{
		n=d;
		adj=new vector<int>[n+1];       // d is number of vertices;
	}
	void addEdge(int u,int v,bool bi=false)
	{
		adj[u].push_back(v);
		if(bi)
			adj[v].push_back(u);
	}
	void display()
	{
		for(auto it=0;it<=n;it++)
		{
			cout<<it<<" -> ";
			for(int j=0;j<adj[it].size();j++)
			{
				cout<<adj[it][j]<<" ";
			}
			cout<<endl;
		}
	}
	void bfs(int s)
	{
		bool visited[n+1]={false};
		queue<int> q;
		q.push(s);
		visited[s]=true;
		while(q.empty()==false)
		{
			int u=q.front();
			cout<<u<<" ";
			q.pop();
			for(int i=0;i<adj[u].size();i++)
			{
				if(visited[adj[u][i]]==false)
				{
					q.push(adj[u][i]);
					visited[adj[u][i]]=true;
				}
			}
		}
	}
};

int main()
{
	Graph g(4); 					//for making a bidirectional graph add true after v in addEdge
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
	g.display();
	g.bfs(2);
	return 0;
}
