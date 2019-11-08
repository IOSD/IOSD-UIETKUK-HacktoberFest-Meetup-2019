import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array:");
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = scn.nextInt();
        }
        quicksort(arr,0,n-1);
        System.out.println("Sorted Array is :");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }

    public static void quicksort(int[] arr,int lo,int hi){
        if(lo>=hi){
            return;
        }

        int left = lo;
        int right = hi;
        int mid = (lo+hi)/2;

        while(left<=right){
            int pivot = arr[mid];
            while(arr[left]<pivot){
                left++;
            }
            while(arr[right]>pivot){
                right--;
            }
            if(left <= right){
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            }
        }

        quicksort(arr,lo,right);
        quicksort(arr,left,hi);
    }
}
