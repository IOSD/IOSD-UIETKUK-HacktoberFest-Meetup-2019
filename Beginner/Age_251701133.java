import java.util.Scanner;

public class Age{
   public static void main(String[] args)
      {
         System.out.println("enter your age");
         Scanner in = new Scanner(System.in);
         int age = in.nextInt();
         
         if (age>18)
            System.out.println("adult");
         else if (age<10)
            System.out.println("child");
         else
            System.out.println("teen");
       }
}
