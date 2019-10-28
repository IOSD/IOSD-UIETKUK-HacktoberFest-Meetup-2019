import java.io.*; 
  
class GFG 
{ 
    static void invertBits(int num) 
    { 

        int x = (int)(Math.log(num) /  
                      Math.log(2)) + 1; 
                      
        for (int i = 0; i < x; i++)  
        num = (num ^ (1 << i));  
      
        System.out.println(num); 
    } 
      
    public static void main (String[] args)  
    { 
        int num = 11;  
        invertBits(num); 
    } 
  
} 
