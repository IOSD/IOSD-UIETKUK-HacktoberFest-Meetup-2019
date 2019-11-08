package lecture12;

import java.util.Scanner;

public class quickSort {

	public static void main(String[] args) {

		Scanner scn = new Scanner(System.in);
//		int n = scn.nextInt();
//		int[] arr = new int[n];
//		for (int i = 0; i < arr.length; i++) {
//			arr[i] = scn.nextInt();
//		}
//		int[] arr = { 1, 2, 1, 2, 1, 2 };

		int[] arr = { 40,20,90,30,70,10,80,60,30};

		quicksort(arr, 0, arr.length - 1);
		for (int val : arr)
			System.out.println(val);
	}

	public static void quicksort(int[] arr, int lo, int hi) {
		if (lo >= hi)
			return;

		int left = lo;
		int right = hi;
		int mid = (lo + hi) / 2;
		int pivot = arr[mid];
/////////////////////////////////////////////////////////
		while (left <= right) {                        //
			while (arr[left] < pivot) {                //
				left++;                                //
			}                                          //
			while (arr[right] > pivot) {               //
				right--;                               //
			}                                          //
                                                       //
			// swapping                                // iss algorith se array two parts me divide ho jaega, left part me saare chotte elements honge right waale parts se  
			if (left <= right) {                       // from low to pivot - left half of array , and from pivot+1 to high  - right half of array
				int temp = arr[left];                  //
				arr[left] = arr[right];                // 
				arr[right] = temp;                     //
                                                       //
				left++;                                //
				right--;                               //
			}                                          //
		}                                              //
/////////////////////////////////////////////////////////		

		
		

		// further partitioning ,applying recurrsion    //
		quicksort(arr, lo, right);                      // recurssion se jo two parts jo divide hue he unn dono me yeh algorithm lagega and jab phir yeh dono parts bhi divide ho jaenge then unn divided parts me yeh algorithm phir se lagega
		quicksort(arr, left, hi);                       //

	}
}
