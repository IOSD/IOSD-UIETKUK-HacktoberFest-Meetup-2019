import java.util.*;
import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array");
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = scn.nextInt();
        }
        System.out.println("Sorted array is :");
        int[] ans = bubblesort(arr);
        for(int i=0;i<n;i++){
            System.out.print(ans[i]+" ");
        }
    }

    public static int[] bubblesort(int[] arr){
    
        for(int i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        return arr;
    }
  
}
