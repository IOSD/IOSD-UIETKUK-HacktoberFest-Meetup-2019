import java.util.Scanner;

public class Binary_Search {
	static Scanner s1 = new Scanner(System.in);
	
	public static int[] takeInput() {
		int size = s1.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s1.nextInt();
		}
		return arr;
	}
	public static int binarySearch(int[] arr, int num){
	      int start = 0 , end = arr.length -1 ;
	      while(start <= end)
	      {
	        int mid = (start + end)/2;
	        if(arr[mid] < num)
	        {
	          start = mid+1;
	        }
	        else if(arr[mid] > num)
	        {
	          end = mid-1;
	        }
	        else if(arr[mid]==num)
	          return mid;
	      }
	      return -1 ;// if the number is not found 
		}
	public static void main(String[] args) {
		int[] arr = takeInput();
		int num = s1.nextInt();
		System.out.print(binarySearch(arr, num));
	}
}
