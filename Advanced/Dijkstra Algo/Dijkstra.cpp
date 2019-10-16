/*
Best concept explanation (Abdul Bari) : https://www.youtube.com/watch?v=XB4MIexjvY0&t=479s

CONTENTS
#Generic graph
#Printing weighted graph
#Dijksta for single source shortest path algorithm
*/

#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    unordered_map<T, list<pair<T,int> > > m;
    
public:

    void addEdge(T u,T v,int dist,bool bidir=true){
        m[u].push_back(make_pair(v,dist)); 
        if(bidir){
            m[v].push_back(make_pair(u,dist));
        }
        
    }

    void dijsktraSSSP(T src){
        
        unordered_map<T,int> dist;
        
        for(auto j:m){
            dist[j.first] = INT_MAX;
        }
        
        set<pair<int, T> > s;
        
        dist[src] = 0;
        s.insert(make_pair(0,src));
        
        while(!s.empty()){
            
            auto p =   *(s.begin());
            T node = p.second;
            
            int nodeDist = p.first;
            s.erase(s.begin());
            
            for(auto childPair: m[node]){
                
                if(nodeDist + childPair.second < dist[childPair.first]){
                    
                    T dest = childPair.first;
                    auto f = s.find( make_pair(dist[dest],dest));
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    
                    dist[dest] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[dest],dest));
                    
                }
                
            }
        }

        for(auto d:dist){
            
            cout<<d.first<<" is located at distance of  "<<d.second<<endl;
        }
        
        
    }

};

int main(){

	/*
		If you have trouble understanding the below "ONLINE_JUDGE" code you can watch

		Introduction to Competitive Programming | International Organisation of Software Developers | IOSD
		https://youtu.be/PgtcvlxgVgE
	*/

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    #endif

	/*
	
	INPUT

	- The first line of the input contains a single 
	  integer N denoting the number of edges.

	- The N subsequent line contains three integer 
	  U, V, Weight where U and V represent the vertex 
	  of the graph and weight represents the edge weight between the two.

	- The last line of the input contains a single integer SRC
	  denoting the source vertex.

	  Also note that this algo makes use of Generic Programming so you can 
	  use any other DataType such as a String in the Graph template.
	  You can go through this article to know more about Generic Programming
	  ( https://medium.com/coding-blocks/generic-programming-in-c-a-conceptual-overview-446f1ee89287 )

	 EXAMPLE
	 Try to run this as input taken from GFG so that you can easily visualise the graph
	 ( https://www.geeksforgeeks.org/wp-content/uploads/Fig-11.jpg ).

    14
    0 7 8
    0 1 4
    1 7 11
    1 2 8
    7 8 7
    7 6 1
    2 8 2
    8 6 6
    2 3 7
    2 5 4
    6 5 2
    3 5 14
    3 4 9
    5 4 10
    0

	 OR

	 To run the below input uncomment the code below String.

	 5
	 Mumbai Amritapuri 5
	 Mumbai Delhi 6
	 Delhi Amritapuri 24
	 Delhi Kanpur 10
	 Kanpur Amritapuri 12
	 Mumbai

	*/

    Graph<int> g;

  	int edge;
  	cin>>edge;

  	for(int i = 0 ; i < edge ; i++)
  	{
  		int a,b;
  		cin>>a>>b;
  		int weight;
  		cin>>weight;

  		g.addEdge(a,b,weight);
  	}
      int src;
      cin>>src;
    
    cout<<"Source: "<<src<<endl;
     g.dijsktraSSSP(src);

     
     //STRING 

   //  Graph<string> g;

  	// int edge;
  	// cin>>edge;

  	// for(int i = 0 ; i < edge ; i++)
  	// {
  	// 	string a,b;
  	// 	cin>>a>>b;
  	// 	int weight;
  	// 	cin>>weight;

  	// 	g.addEdge(a,b,weight);
  	// }
   //    string src;
   //    cin>>src;
    
   //  cout<<"Source: "<<src<<endl;
   //   g.dijsktraSSSP(src);
}
