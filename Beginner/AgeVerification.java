import java.util.Scanner;

public class AgeVerification {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter The Age:");
		try {
			double age = scan.nextDouble();
			if(age<=0) throw new NumberFormatException("Age cant be negative or zero");
			if(age>18) System.out.println("adult");
			else if(age>10 && age<=18) System.out.println("teen");
			else if(age<10) System.out.println("child");
			else System.out.println("age is ten");
		} catch(NumberFormatException ex) {
			System.out.println(ex.getMessage());
		}
	}
}
