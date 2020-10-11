package Array;
public class ArrayPrac {

	public static void main(String[] args) {
		int []arr1={1,2,3,4,5};
		int pos1=binarysearch(arr1,3);
		System.out.println(pos1);
		
	}
	private static int binarysearch(int[] arr, int k) {
		// TODO Auto-generated method stub
		int pos=0;
		int start=0;
		int end=arr.length-1;
		
		while(start!=end){
			int mid=(start+end)/2;
			if(k==arr[mid]){
				pos=mid;
				return pos+1;
			}
			else if(k<arr[mid]){
				end=mid-1;
			}else{
				start=mid+1;
			}
		}
		return 0;
	}
