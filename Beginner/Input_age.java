import java.util.*;

public class New {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();

        if(age > 18) {
            System.out.println("adult");
        }
        else if (age < 10) {
            System.out.println("child");
        }
        else {
            System.out.println("teen");
        }
    }
}
