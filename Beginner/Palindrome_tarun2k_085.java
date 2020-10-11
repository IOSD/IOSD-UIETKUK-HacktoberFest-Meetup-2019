import java.util.*;
public class Main {
    public static void main(String args[]) {
        // Your Code Here
		Scanner s=new Scanner(System.in);
		String a,b="";
    System.out.println("Enter the string to check whether it's a palindrome or not:");
		a=s.nextLine();
		int n=a.length();
		for(int i=n-1;i>=0;i--){
			b+=a.charAt(i);
		}
		if(a.equals(b)){
			System.out.print("true");
		}
		else{
			System.out.print("false");
		}

    }
}
