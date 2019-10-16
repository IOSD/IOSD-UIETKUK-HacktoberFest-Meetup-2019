import java.util.Scanner;
class Flip  
{ 
    
    public static int reverseBits(int n) 
    { 
        int rev = 0; 
        while (n > 0)  
        { 
            rev <<= 1; 
            if ((int)(n & 1) == 1) 
                rev ^= 1; 
            n >>= 1; 
        } 
        return rev; 
    } 
    public static void main(String[] args) 
    {  
        Scanner sc=new Scanner(System.in);    
        int n = sc.nextInt(); 
        System.out.println(reverseBits(n)); 
    } 
} 
  
