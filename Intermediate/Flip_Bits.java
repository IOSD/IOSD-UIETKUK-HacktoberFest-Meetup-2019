import java.util.*;
public class Flip_Bits {
	
	    public static void FlipBits(int num) 
	    { 
	        int x = (int)(Math.log(num)/Math.log(2)) + 1; 
	        for (int i = 0; i < x; i++)  
	        num = (num ^ (1 << i));  
	        System.out.println(num); 
	    } 
		public static void main(String[] args) {
			Scanner s = new Scanner (System.in);
			int num = s.nextInt();
			FlipBits(num);
		}
}
