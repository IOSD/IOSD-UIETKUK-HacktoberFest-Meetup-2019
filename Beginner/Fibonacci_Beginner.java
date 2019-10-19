import java.util.Scanner;

public class Fibonacci_Beginner {
	public static void main(String args[]) {
		System.out.println("Enter the length of the fibonacci sequence:");
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		fibonacci(n);
	}

	private static void fibonacci(int n) {
		int x[] = new int[n+1];
		if(n==1) System.out.println(0);
		if(n==2) System.out.println(0+","+1);
		
		if(n>2) {
			x[0] = 0;
			x[1] = 1;
			System.out.print(0+","+1+",");
			for(int i=2;i<n;i++) {
				x[i] =x[i-1] +x[i-2];
				System.out.print(x[i]+",");
			}
		}
		
	}
}
