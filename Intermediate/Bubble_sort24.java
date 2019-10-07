package Array;

public class BubbleSort {

	public static void main(String[] args) {
		
		int []arr={10,15,2,-1,17,1};
		int jc=1;
		for(int j=0;j<arr.length;j++){
			for(int i=0;i<arr.length-jc;i++){
				if(arr[i]>arr[i+1]){
					int temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
			}
			jc++;
		}
		
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" ");
		}
	}

}
