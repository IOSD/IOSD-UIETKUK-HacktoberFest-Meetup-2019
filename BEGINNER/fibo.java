
public class Program
{
	public static void main(String[] args) {

     
     int first=0,second=1,next,i=2;
     
     System.out.print(first+" "+second+" " );
     while(i<=100){
         next=first+second;
         System.out.print(next+" ");
         first=second;
         second=next;
         i++;
     }
    
	}
}