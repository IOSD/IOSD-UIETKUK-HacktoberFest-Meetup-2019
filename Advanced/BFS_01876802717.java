import java.io.*;
import java.util.*;
 
class Graph
{
    private int numVertices;
    private LinkedList<Integer> adjLists[];
    private boolean visited[];
 
    Graph(int v)
    {
        numVertices = v;
        visited = new boolean[numVertices];
        adjLists = new LinkedList[numVertices];
        for (int i=0; i i = adjLists[currVertex].listIterator();
            while (i.hasNext())
            {
                int adjVertex = i.next();
                if (!visited[adjVertex])
                {
                    visited[adjVertex] = true;
                    queue.add(adjVertex);
                }
            }
        }
    }
 
    public static void main(String args[])
    {
        Graph g = new Graph(4);
 
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);
 
        System.out.println("Following is Breadth First Traversal "+
                           "(starting from vertex 2)");
 
        g.BFS(2);
    }
}
