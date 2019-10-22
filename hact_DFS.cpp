// TIME COMPLEXITY : O(V + E), where V is the number of vertices, and E is the number of Edges.


#include<bits/stdc++.h>
using namespace std;


template<typename T>
class graphmap{

    map<T, list<T> >l;
    map<T, list<pair<T,int>>> m;
public:
    graphmap(){

    }

void addedge(T u, T v, bool bidir=true){
l[u].push_back(v);
if(bidir){
    l[v].push_back(u);
}
}

void addedge(T u, T v, bool bidir,int dist){
 m[u].push_back(make_pair(v,dist));
if(bidir){
    m[v].push_back(make_pair(u,dist));
}
}



void printgraph(){

for(auto i: l){
    cout<<i.first<<"-";
    for(auto vertex: i.second){
cout<<vertex<<",";
    }
cout<<endl;
}

}



helper(T src , map<T, bool> &visited){

visited[src]=true;
cout<<src<<"-";
for(auto child: l[src]){
    if(!visited[child]){
    helper(child, visited);}
}

}

void dfs(T src){

map<T,bool> visited;
helper(src, visited);

// non connected graphs
for(auto i: l){
         T child = i.first;
    if(!visited[child]){
    helper(child, visited);}
}
}
};

int main(){

graphmap<int> g;

g.addedge(1,2,true);
g.addedge(2,3,true);
g.addedge(3,4,true);
g.addedge(1,4,true);
g.addedge(5,3,true);
g.addedge(3,1,true);
cout<<"DFS :: ";
g.dfs(2);
return 0;
}
