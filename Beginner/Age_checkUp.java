import java.util.Scanner;

public class Age_checkUp {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int age = s.nextInt();
		if(age > 18)
			System.out.println("adult");
		else if(age > 10)
			System.out.println("teen");
		else
			System.out.println("child");
	}

}
