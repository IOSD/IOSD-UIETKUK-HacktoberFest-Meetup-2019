import java.util.Scanner;
public class Program
{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		
		System.out.println("Enter number of elements");
		int num=s.nextInt();
		int arr[]=new int[num];
		for(int i=0;i<arr.length;i++){
		    arr[i]=s.nextInt();
		}
		System.out.println("Enter search item");
		int search=s.nextInt();
		int low=0,high=arr.length-1,mid=(int)((low+high)/2);
		boolean check=false;
		while(low<=high){
		   // mid=(int)((low+high)/2);
		    if(arr[mid]==search){
		        check=true;
		        break;
		    }
		    else if(arr[mid]>search){
		        low=mid+1;
		    }else{
		        high=mid-1;
		    }
		     mid=(int)((low+high)/2);
		}
		if(check)
		System.out.println("Item at "+mid);
		else
		System.out.println("Item not present");
	}
}