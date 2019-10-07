import java.util.Scanner;

public class OddOrEven{
   public static void main(String[] args)
      {
         System.out.println("enter the number");
         Scanner in = new Scanner(System.in);
         int x = in.nextInt();
         
         if (x%2==0)
            System.out.println("number is even");
         else
            System.out.println("number is odd");
       }
}
