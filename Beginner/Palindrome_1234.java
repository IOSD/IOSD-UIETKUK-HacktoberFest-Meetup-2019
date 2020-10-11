import java.util.*;
public class palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        palin(s);
    }

    public static void palin(String s) {
        for (int i = 0; i < s.length() / 2; i++) {
            if (s.charAt(i) == s.charAt(s.length() - i - 1)) {
                System.out.println("palindrome");
            } else {
                System.out.println("not a palindrome");
            }
        }
    }
}
