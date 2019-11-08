import java.io.*;
public class bubblesort
{
public static void main(String args[])throws IOException
{
 BufferedReader ob=new BufferedReader(new InputStreamReader(System.in));      
int a[]=new int[100];
int n,c,d,position,swap;
	System.out.println("Enter number of elements\n");
	n=Integer.parseInt(ob.readLine());
	System.out.println("enter "+n+"  integers");
	for(c=0;c<n;c++)
	a[c]=Integer.parseInt(ob.readLine());
	for(c=0;c<(n-1);c++)
	{   for(int j=0;j<n-1-c;j++)
	{   if(a[j]>a[j+1])
	{swap=a[j];
	a[j]=a[j+1];
	a[j+1]=swap;
	}}}	
System.out.println("sorted list in ascending order is :");
	for(c=0;c<n;c++)
	System.out.print(a[c]+" ");
}}
