// Java program to find nth 
// magic numebr 
import java.io.*; 

class GFG 
{ 
// Function to find nth magic number 
static int nthMagicNo(int n) 
{ 
	int pow = 1, answer = 0; 

	// Go through every bit of n 
	while (n != 0) 
	{ 
	pow = pow*5; 

	// If last bit of n is set 
	if ((int)(n & 1) == 1) 
		answer += pow; 

	// proceed to next bit 
	// or n = n/2 
	n >>= 1; 
	} 
	return answer; 
} 

// Driver program to test 
// above function 
public static void main(String[] args) 
{ 
	int n = 5; 
	System.out.println("nth magic" + 
	" number is " + nthMagicNo(n)); 
} 
} 


// This code is contributed by 
// prerna saini 
