import java.util.*;
//  Input The Age, if age > 18 print adult , if 10 < age <= 18 print teen, if age < 10 print child
public class Age_Checker_ProgramV1 {

    public static void main(String[] args) {
            Scanner s = new Scanner(System.in);
            System.out.println("Enter your age: ");
            int age = s.nextInt();
            if (age <= 10){
                System.out.println("You are Kid");
            }else if (age < 18 && age > 10){
                System.out.println("You are teen.");
            }else {
                System.out.println("You are Adult.");
            }
        }
    }
