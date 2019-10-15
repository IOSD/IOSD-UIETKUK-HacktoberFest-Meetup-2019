import java.util.Scanner;

public class Palindrome {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String st = s.next();
		String reverse = new StringBuffer(st).reverse().toString(); 
		if(st.equals(reverse))
			System.out.println("Palindrome");
		else
			System.out.println("Not Palindrome");
	}

}
