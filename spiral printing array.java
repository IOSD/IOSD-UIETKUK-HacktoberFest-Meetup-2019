

import java.util.Scanner;

public class SpiralPrintingofArray {

	public static Scanner scn = new Scanner(System.in);

	public static void main(String[] args) {
	                                         int [][]arr=take();
	                                       
                                             display(arr);
                                           }
	public static int[][]take()
	{ 
		int [][]rv=null;
	  
	  int N=scn.nextInt();
	 int M=scn.nextInt();
	  rv=new int [N][M];
	  for(int i=0;i<N;i++)
	  {   for(int j=0;j<M;j++)
	     { rv[i][j] = scn.nextInt();}
	  } 
	  return rv;
	}
	public static void display(int[][] arr){
	      int i;
		  int mincol=0;
		   int minrow=0;
		   int maxcol=arr[0].length-1;
		   int maxrow=arr.length-1;
		   while(minrow<=maxrow&&mincol<=maxcol)
		   { for( i=minrow;i<=maxrow;i++)
		       { System.out.print(arr[i][mincol]+", ");}
		     for( i=mincol+1;i<=maxcol;i++)
		     { System.out.print(arr[maxrow][i]+", ");}
		     for( i=maxrow-1;i>=minrow;i--)
		     { if(arr[0].length%2!=0&&maxcol-1>=mincol+1)
		     { System.out.print(arr[i][maxcol]+", ");}
		        if(arr[0].length%2==0)
		        	{System.out.print(arr[i][maxcol]+", ");}}
		     for(i=maxcol-1;i>=mincol+1;i--)
		     { System.out.print(arr[minrow][i]+", ");}
		  
		   mincol++;
		   minrow++;
		   maxrow--;
		   maxcol--;
		   } System.out.println("END");
	}}
		
		
		
	
	
	  
