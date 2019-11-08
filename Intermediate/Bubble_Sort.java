import java.util.Scanner;

public class Bubble_Sort {

	public static int[] takeInput() {
		Scanner s = new Scanner(System.in);
		int size = s.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s.nextInt();
		}
		return arr;
	}
	public static void print(int[] arr) {
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]+" ");
		}
	}
	public static void bubbleSort(int[] arr){
	      for(int i=0 ; i<arr.length ; i++)
	      {
	        for(int j=0 ; j<arr.length ; j++)
	        {
	          if(arr[i] < arr[j])
	          {
	            int temp = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp;
	          }
	        }
	      }
		}
	public static void main(String[] args) {
		int[] arr = takeInput();
		bubbleSort(arr);
		print(arr);
	}

}
