import java.util.Scanner;

public class Odd_Even {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int number = s.nextInt();
		if(number %2 == 0)
			System.out.println("not odd");
		else
			System.out.println("odd");
	}
}
