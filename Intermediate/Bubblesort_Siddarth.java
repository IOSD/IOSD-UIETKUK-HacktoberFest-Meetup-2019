import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.util.Scanner;

public class BubbleSort {

    public static void main(String[] args) {
  
  Scanner sc = new Scanner(System.in);
        
       int n = sc.nextInt();
          
          int arr[] = new int[n];
          
          
          for (int i = 0; i < n; i++) {
              arr[i] = sc.nextInt();
          }
           int l = arr.length;

         
          for(int i=0; i<arr.length-1; i++) {
              for(int j=0; j<arr.length-1; j++) {
                  
                  if(arr[j+1] < arr[j]) {
                      
                      int temp = arr[j+1];
                      arr[j+1] = arr[j];
                      arr[j] = temp;
                      
                   
                  }
              }
             }
          for(int item: arr) {
          System.out.print(item +" ");
              }
  }
    
    
}



