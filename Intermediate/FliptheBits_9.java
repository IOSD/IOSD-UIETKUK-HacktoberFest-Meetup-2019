import java.util.*;
import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter the number in decimal form :");
        int dec = scn.nextInt();
        int binary = 0;
        int ans = 0,count = 0;

        while(dec!=0){
            int rem = dec%2;//1
            rem = (rem==0)?1:0;
            binary += rem*(int)Math.pow(10,count);
            dec /= 2;
            count++;
        }
        count = 0;

        System.out.print("Number after reversing the bits :");
        while(binary!=0){
            int rem = binary%10;
            ans += rem*(int)Math.pow(10,count);
            binary /= 10;
            count ++;
        }

        System.out.print(ans);
    }
}
