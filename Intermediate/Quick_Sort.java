public class Quick_Sort {

    public static void main(String[] args) {
	int[] intArray = {20, 35, -15, 7, 55, 1, -22};

    quickSort(intArray, 0, intArray.length);

	for(int i = 0; i < intArray.length; i++) {
	    System.out.println(intArray[i]);
        }
    }

    public static void quickSort(int[] input, int start, int end) {

        if(end - start < 2) {
            return;
        }

        int piviotIndex = partition(input, start, end);
        quickSort(input, start, piviotIndex);
        quickSort(input, piviotIndex + 1, end);
    }

    public static int partition(int[] input, int start, int end) {

        // This is using the first element as piviot
        int piviot = input[start];
        int i = start;
        int j = end;

        while(i < j) {

            // NOTE: empty loop body
            while(i < j && input[--j] >= piviot);
            if(i < j) {
                input[i] = input[j];
            }

            // NOTE: empty loop body
            while(i < j && input[++i] <= piviot);
            if(i < j) {
                input[j] = input[i];
            }
        }

        input[j] = piviot;
        return j;
    }
}
