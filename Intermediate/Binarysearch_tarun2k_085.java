import java.util.*;
public class Main {
    public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
    System.out.println("Enter number of elements in the list: ");
		int n=s.nextInt();
		int [] arr=new int[n];
		for (int i=0;i<n;i++) {
      System.out.println("Enter element:");
			arr[i]=s.nextInt();
		}
    System.out.println("Enter number to be searched:");
		int m=s.nextInt();
		binarysearch(arr,m);
    }
	public static void binarysearch(int[] arr, int d) {
		int start=0;
		int end=arr.length-1;
		int c=-1;
		while(start<=end) {
			int mid=(start+end)/2;
			if (arr[mid]==d) {
				for(int i=arr.length-1;i>0;i--) {
					if (arr[i]==d) {
							c=i;
					}
				}
        System.out.println("Index at which number is present: ");
				System.out.println(c);
				break;
			}
			else if(arr[mid]>d) {
				end=mid-1;
			}
			else {
				start=mid+1;
			}

		}
		if(c==-1) {
				System.out.println("Number not found ");

		}

    }
}
