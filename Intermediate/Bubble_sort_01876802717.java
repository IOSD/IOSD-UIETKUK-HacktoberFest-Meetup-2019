public class BubbleSort {

	public static void main(String[] args) {
	int numberArray[] = {9,4,-7,7,-1,5,3};
	int n = numberArray.length;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(numberArray[j] > numberArray[j+1])
			{
				int temp = numberArray[j];
				numberArray[j] = numberArray[j+1];
				numberArray[j+1] = temp;
			}
		}
	}
	for(int itemView: numberArray) {
		System.out.print(itemView+" ");
	}
	

	}

}
