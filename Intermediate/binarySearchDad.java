package lecture5;

import java.util.Scanner;

public class binarysearch {

	static Scanner scn = new Scanner(System.in);

	public static void main(String[] args) {

		int i = 0;
		System.out.println("enter the size");

		int size = scn.nextInt();
		int[] arr = takeinput(size);

		System.out.println("enter the no. to be search");
		int m = scn.nextInt();

		System.out.println(binarysearch(arr, m));

	}

	public static int binarysearch(int[] arr, int item) {
		int lo = 0;
		int hi = arr.length - 1;
		// int max=item;
		int mid;

		while (lo <= hi) {
 
			mid = (lo + hi) / 2;

			if (arr[mid] > item) {
				hi = mid - 1;
			} else if (arr[mid] < item) {
				lo = mid + 1;
			} else {
				System.out.println("element present");
				return mid;
			}

		}
 
		return -1;
	}

	public static int[] takeinput(int n) {
		int[] arr = new int[n];
		System.out.println("enter values");
		System.out.println();

		for (int i = 0; i < n; i++) {
			arr[i] = scn.nextInt();
		}
		return arr;
	}
}
