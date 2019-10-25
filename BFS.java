import java.util.*;
import java.util.Queue;
 
public class BFS{
	private int n;
	private LinkedList<Integer> adjList[];
	private Queue<Integer> q = new LinkedList();
	
	// creating adjacency list for each vertex.
	public void makeGraph(int no)
	{
		n = no;
		adjList =  new LinkedList[no];
		
		int i;
		
		for (i= 0; i < no; i++)
		{
			adjList[i] = new LinkedList();
		}
	}
	
	// adding edges to graph
	public void addEdgeToGraph(int u, int v)
	{
		adjList[u].add(v);
	}
	
	//BFtravesal function traverse one connected component of graph 
	public void BFtraversal(int v, boolean[] visited)
	{
		q.add(v);
		visited[v]  =  true;
		
		int k;
		
		while( !q.isEmpty() )
		{   
			k = q.remove();
		    System.out.print( k +" ");
			// we are iterating through adjacency list of vertex k which has to be explored now.
			// it will give the adjacent nodes of each vertex.
			Iterator<Integer> i = adjList[k].listIterator();
			int j;
			
			while( i.hasNext() )
			{  
		        
        		j = i.next();
				if( visited[j] != true )
				{
				// if any child found with out visiting then those child will be added to queue.
				q.add(j);
				visited[j] = true;
				}
			}
		}
	}
	
			public void BFsearch(int v)
	{
		boolean visited[] = new boolean[n];
		
        BFtraversal(v, visited);
		for ( int i = 0; i < n; i++ )
		{   
	        // after calling BFtraveral it is checking whether any vertex left out with out exploring
			if( visited[i] != true )
			{
				// if found it will call again  BFtraversal
				BFtraversal(i, visited);
			}
		}
	}
	
	public static void main(String args[])
	{
		BFS obj = new BFS();
		
		//make graph will make 10 vertices and it will maintain an adjacency list for each vertex.
		obj.makeGraph(10);
		
		obj.addEdgeToGraph(0, 1);
		obj.addEdgeToGraph(0, 9);
		obj.addEdgeToGraph(2, 3);
		obj.addEdgeToGraph(2, 4);
		obj.addEdgeToGraph(3, 5);
		obj.addEdgeToGraph(3, 6);
		obj.addEdgeToGraph(4, 7);
		obj.addEdgeToGraph(4, 8);
		
		System.out.println("BFS of graph is:");
		
		// we are starting search from 0th vertex.
		obj.BFsearch(0);
	}
}
