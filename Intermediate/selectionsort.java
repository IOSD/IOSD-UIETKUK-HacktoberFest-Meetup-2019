import java.util.Scanner;
public class selectionsort{
    public static Scanner scn=new Scanner(System.in);
   
   public static void main(String[] args){
       System.out.println("enter size");
       int n=scn.nextInt();
        int[] arr=new int[n];
        input(arr);
        selectionSort_(arr);
    }

    public static void input(int[] arr){
        System.out.println("enter elements");
         for(int i=0;i<arr.length;i++){
             arr[i]=scn.nextInt();
         }
     }

     public static void display(int[] arr) {
        for (int i : arr) {
            System.out.print(i + " ");
        }

        System.out.println();}

    public static void swap(int[]arr,int i,int j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        } 

 public static void selectionSort_(int[] arr){
            for(int i=0;i<arr.length;i++){
               for(int j=i+1;j<arr.length;j++){
                       if (arr[i]>arr[j]){
                           swap(arr, j, i);
                        }
               }
            }
            display(arr);
        }
}
