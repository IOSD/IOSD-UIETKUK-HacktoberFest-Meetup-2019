import java.util.Scanner;

class swap_three_values {

    public static void main(String args[])
    {
       
        int a, b, c, swap;
       
        System.out.println("Please enter the value of a");
       
        Scanner sc = new Scanner(System.in);
       
        a = sc.nextInt();
       
        System.out.println("You have entered the value of a:\t"+a);
       
        System.out.println("Please enter the value of b");
        
        b = sc.nextInt();
       
       
        System.out.println("You have entered the value of b:\t"+b);
       
         System.out.println("Please enter the value of c");
       
        c = sc.nextInt();
       
        System.out.println("You have entered the value of c:\t"+c);
       
        System.out.println("Before swap the value of a is\t" + a);
       
        System.out.println("Before swap the value of b is\t" + b);
       
        System.out.println("Before swap the value of c is\t" + c);
       
        System.out.println("Swapping start from here");
       
        swap = a;
       
        a = b;
       
        b = c;
       
        c = swap;
       
        System.out.println("After swap the value of a is\t" + a);
       
        System.out.println("After swap the value of b is\t" + b);
       
        System.out.println("After swap the value of c is\t" + c);
    }


}
