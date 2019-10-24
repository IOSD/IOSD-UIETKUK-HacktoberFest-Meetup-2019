import java.util.Arrays;
public class Solution {
	
	public static void quickSort(int[] input) {
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * No need to print or return the output.
		 * Taking input and printing output is handled automatically.
		 */
		quickSort(input, 0, input.length - 1);
    }

    public static void quickSort(int[] input, int Start, int End) {
        if (Start >= End)
            return;
        int s = partition(input, Start, End);
        quickSort(input, Start, s - 1);
        quickSort(input, s + 1, End);
    }

    public static int partition(int[] input, int Start, int End) {
        int i = Start, j = End;

        int Count = 0;
        for (int x = Start; x <= End; x++) {
            if (input[Start] > input[x])
                Count++;
        }
        int pivot = Start + Count;
        swap(input, Start, pivot);

        while (i <= pivot - 1 && j >= pivot + 1) {
            while (input[i] < input[pivot])
                i++;
            while (input[j] >= input[pivot])
                j--;
            if (i >= pivot || j <= pivot)
                break;
            else
                swap(input, i, j);
        }

        return pivot;
    }
    
    public static void swap(int[] input, int i, int j) {
        int temp = input[i];
        input[i] = input[j];
input[j] = temp;
	}
}
