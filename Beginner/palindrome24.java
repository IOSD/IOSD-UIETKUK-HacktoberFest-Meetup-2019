import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scn=new Scanner(System.in);
        String str=scn.nextLine();
        boolean ans=palindrome(str);
        System.out.println(ans);
    }
    public static boolean palindrome(String str){
        int i=0;
        int e=str.length()-1;
        while(i<e){
            char a=Character.toLowerCase(str.charAt(i));
            char b=Character.toLowerCase(str.charAt(e));
            if(a!=b){
                return false;
            }
            i++;
            e--;
        }
        return true;
    }
}
