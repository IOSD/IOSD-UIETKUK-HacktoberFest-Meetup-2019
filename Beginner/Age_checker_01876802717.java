import java.util.Scanner;
   
    public class AgeChecker {
        public static void main (String[] ar)
        {
           int yourAge;
           Scanner s1 = new Scanner (System.in);
           System.out.println("Enter Your Age:-");
           yourAge = s1.nextInt();
           
           if(yourAge > 18){
              System.out.println("adult");   }
           else if(yourAge > 10 && yourAge <= 18){
              System.out.println("teen");    }
           else
            {   System.out.println("child");   } 
           
        }
        
    }
