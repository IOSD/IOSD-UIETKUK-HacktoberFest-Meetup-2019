import java.util.Scanner;

public class fibonacci {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int series = s.nextInt();
		int a = 0 , b =1 ;
		if(series==1)
			System.out.println("0");
		else if(series >=2) {
			System.out.print("0 1 ");
		}
		for(int i=3 ; i<= series ; i++) {
			int c = a+b;
			a = b ;
			b = c;
			System.out.print(c + " ");
		}
	}

}
