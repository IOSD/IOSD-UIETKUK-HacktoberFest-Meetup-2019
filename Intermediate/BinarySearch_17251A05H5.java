import java.util.Scanner;
class BinarySearchExample{  
     public static void binarySearch(int a[], int first, int last, int n){  
        int l=first,h=last,m;
        while(l<=h){
         m=(l+h)/2;
         if(a[m]==n){System.out.println("element found at position:"+m);return;}
         else if(a[m]>n){h=m-1;}
         else if(a[m]<n){l=m+1;}
        }
        System.out.println("Element is not found");
     }
     public static void main(String args[]){  
            Scanner sc=new Scanner(System.in);
            System.out.println("enter number of elements");
            int n=sc.nextInt();
            int[] a=new int[n];
            System.out.println("enter the elements");
            for(int i=0;i<n;i++){
               a[i]=sc.nextInt();
            }
            System.out.println("enter the ke to be searched");
            int key=sc.nextInt(); 
            int last=a.length-1;
            binarySearch(a,0,last,key);     
     }  
}  
