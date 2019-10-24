import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int V = s.nextInt();
        int E = s.nextInt();

        int[][] Edges = new int[V][V];

        for (int i = 0; i < E; i++) {
            int n1 = s.nextInt();
            int n2 = s.nextInt();
            Edges[n1][n2] = 1;
            Edges[n2][n1] = 1;

        }
        int StartIndex = s.nextInt();
        int EndIndex = s.nextInt();

        boolean[] Visited = new boolean[V];

        ArrayList<Integer> List = getpathbfs(Edges, StartIndex, EndIndex, Visited);
        for (int i = 0; i < List.size(); i++) {
            System.out.print(List.get(i) + " ");
        }
    }

    public static ArrayList<Integer> getpathbfs(int[][] Edges, int StartIndex, int EndIndex, boolean[] Visited) {
        Queue<Integer> queue = new LinkedList<>();

        LinkedHashMap<Integer, Integer> map = new LinkedHashMap<>();
        queue.add(StartIndex);
        Visited[StartIndex] = true;
        int temp = 0;
        while (!queue.isEmpty()) {
            int Front = queue.poll();
            for (int i = 0; i < Edges.length; i++) {
                if (Edges[Front][i] == 1 && Visited[i] != true) {
                    queue.add(i);
                    Visited[i] = true;
                    map.put(i, Front);
                    if (i == EndIndex) {
                        temp = 1;
                        break;
                    }
                }
            }
        }
        if (temp == 0) {
            return new ArrayList();
        }
        ArrayList<Integer> List = new ArrayList<>();
        List.add(EndIndex);
        int x = EndIndex;
        while (x != StartIndex) {
            List.add(map.get(x));
            x = map.get(x);
        }

        return List;

    }
}
