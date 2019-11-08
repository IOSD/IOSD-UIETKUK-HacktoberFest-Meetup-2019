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
        System.out.println("Enter the element to be searched :");
        int item = scn.nextInt();
        binarysearch(arr,item);
    }

    public static void binarysearch(int[] arr,int item){
        int lo = 0;
        int hi = arr.length-1;
        boolean flag = false;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(arr[mid]>item){
                hi = mid-1;
            }
            else if(arr[mid]<item){
                lo = mid+1;
            }
            else{
                System.out.print("Item found at position :");
                System.out.println(mid+1);
                flag = true;
                break;
            }
        }
        if(flag == false){
            System.out.println("Item not found!!");
        }

        return ;
    }
}
