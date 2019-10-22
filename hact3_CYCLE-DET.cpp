
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




bool cycle_detection(T src){
    queue<T> q;
    q.push_back(src);
    map<T,T> parent;
    map<T, bool> visited;
    visited[src]=true;
    parent[src]=src;

    while(!q.empty()){
            T node = q.front();
            q.pop();

            for(auto i:l[node]){
                if(!visited[i]){
                    visited[i]=true;
                    parent[i]=node;
                    q.push_back(i);
                }
                else if( parent[node]!=i){
                    return true;
                }

            }


return false;

    }



}


bool cycledetect_directed(T src,map<T, bool> &visited,map<T, bool> &stackorder){


visited[src]= true;
stackorder[src]=true;

for(auto i:l[src]){
        if(!visited[i]){
   if( cycledetect_directed(i,visited, stackorder)){
    return true;
   }
        }
        else if(stackorder[i]){
            return true;
        }
}
stackorder[src]=false;
return false;
}




int main(){

graphmap<int> g;

g.addedge(1,2,true);
g.addedge(2,3,true);
g.addedge(3,4,true);
g.addedge(1,4,true);
g.addedge(5,3,true);
g.addedge(3,1,true);
g.printgraph();
cout<<"BFS :: ";
g.bfs(2);
return 0;
}

