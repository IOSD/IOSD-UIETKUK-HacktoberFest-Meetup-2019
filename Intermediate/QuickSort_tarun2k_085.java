import java.util.*;
public class Main {
    public static void main(String args[]) {
      System.out.println("Enter number of elements");
      Scanner s=new Scanner(System.in);
      int n=s.nextInt();
      int[] arrm=new int[n];
      for(int i=0; i<n; i++){
         System.out.println("Enter element");
         arrm[i]=s.nextInt();
      }
      quickSort(arrm,0,n-1);
		  for(int i=0; i<arrm.length; i++) {
			  System.out.print(arrm[i]+" ");
		  }      
        
    }
    
    public static void quickSort(int[] arrm, int start, int end) {
		  if(start>=end)
			  return;
		
		  int pindex=partition(arrm, start, end);
		  quickSort(arrm,start,pindex-1);
		  quickSort(arrm,pindex+1,end);
		
	}
	
	public static int partition(int [] arrm, int start, int end) {
		int pivot=arrm[end];
		int pindex=start;
		for(int i=start; i<=end-1; i++) {
			if(arrm[i]<=pivot) {
				swap(arrm,pindex,i);
				pindex++;
			}
			
		}
		swap(arrm, pindex,end);
		return pindex;
	}
	
	public static void swap(int[] arrm, int i, int j) {
		int temp=arrm[i];
		arrm[i]=arrm[j];
		arrm[j]=temp;
	}

}
