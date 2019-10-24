import java.util.Scanner;

public class FibonacciSeries{

      public static void main(String[] args){
      int first=0,second=1,next;
         System.out.println("enter the number");
         Scanner in = new Scanner(System.in);
         int n = in.nextInt();
            for (int i=1;i<=n;++i){
                   System.out.println(first + "  ");
                   next = first+second;
                   first = second;
                   second = next;}
       }
}
  
