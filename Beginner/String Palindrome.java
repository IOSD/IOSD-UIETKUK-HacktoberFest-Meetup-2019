import java.util.*;
class Palindrome {
    public static void main(String args[]) {
        // Your Code Here
		Scanner scanner=new Scanner(System.in);
		String line,check="";
    System.out.println("Enter the string to be checked :");
		line=scanner.nextLine();
		int n=line.length();
		for(int i=n-1;i>=0;i--){
			check+=line.charAt(i);
		}
		if(line.equals(check)){
			System.out.print("Palindrome");
		}
		else{
			System.out.print("Not Palindrome");
		}

    }
}
