import java.util.Scanner;

public class Quick_Sort {

	public static void quickSort(int[] input) {
	    quickSort(input , 0 , input.length-1 );
		}
	    public static void quickSort(int [] input , int si , int ei){
	      if(si>=ei)
	        return;
	      int pivotpos = Partition(input , si , ei);
	      quickSort(input , si , pivotpos-1);
	      quickSort(input , pivotpos+1 , ei);
	    }
	    public static int Partition(int input[] , int si , int ei){
	      int pivot = input[si];
	      
	      int pivotpos = si ;
	      int ctr=0;
	      for(int i=1 ; i <= ei-si ; i++ ){
	        if(input[i+si] <= pivot)
	          ctr++;
	      }
	      int temp = input[si+ctr];
	      input[si+ctr] = input[si];
	      input[si] = temp ;
	      
	      pivotpos = si+ctr;
	      
	      int i=si , j=ei ;
	      while(i<pivotpos && j>pivotpos){
	        while(input[i]<=pivot /*&& i<=ei*/)
	          i++;
	        while(input[j]>pivot)
	          j--;
	        if(i<=j){
	        int t = input[i];
	        input[i] = input[j];
	        input[j] = t;
	        i++;j--;}
	      }
	      return pivotpos;
	    }
	    static Scanner s = new Scanner(System.in);
		
		public static int[] takeInput(){
			int size = s.nextInt();
			int[] input = new int[size];
			for(int i = 0; i < size; i++){
				input[i] = s.nextInt();
			}
			return input;
		}
	public static void main(String[] args) {
		int[] input = takeInput();
		quickSort(input);
		for(int i = 0; i < input.length; i++) {
			System.out.print(input[i] + " ");
		}
	}

}
