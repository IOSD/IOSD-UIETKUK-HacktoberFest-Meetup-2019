import java.util.InputMismatchException;
import java.util.Scanner;

public class CheckNumberOdd {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter The Number:");
		try {
		int no = scan.nextInt();
		if(no%2==0) System.out.println("Even");
		else System.out.println("Odd");
		} catch(InputMismatchException ex) {
			System.out.println("Please enter integer number ");
		} catch (Exception ex) {
			System.out.println(ex);
		}
	}
}
