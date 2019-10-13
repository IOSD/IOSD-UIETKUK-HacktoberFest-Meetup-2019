import java.util.*;
public class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the age:");
        int n=s.nextInt();
        if(n>18){
          System.out.println("Adult");
        }
        else if(n<=18 && n>10){
          System.out.println("Teenager");
        }
		else{
			System.out.println("Child");
		}
	}
}
