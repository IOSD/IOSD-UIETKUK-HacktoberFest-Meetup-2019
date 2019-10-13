package lecture5;

import java.util.Scanner;

public class bubblesort {

	static Scanner scn = new Scanner(System.in);

	public static void main(String[] args) {

		System.out.println("enter the size");

		int size = scn.nextInt();
		int[] arr = takeinput(size);

		System.out.println("sorted array is");

		 bubblesort(arr); // resultant answer array me store hoga
		display(arr);

	}

	public static void display(int[] arr) {

		for (int val : arr) {
			System.out.print(val + "\t");
		}
	}

	public static void bubblesort(int[] arr) {
		int temp;

		for (int counter = 0; counter < arr.length - 1; counter++) {
			for (int j = 0; j < arr.length - counter - 1; j++)

				if (arr[j + 1] < arr[j]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}

		}

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
