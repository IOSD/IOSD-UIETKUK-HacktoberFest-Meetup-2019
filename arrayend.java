// Java implementation of the above approach 

class GFG 
{ 

	static int maxLen = 10; 
	static int maskLen = 130; 

	// variable to store states of dp 
	static int[][] dp = new int[maxLen][maskLen]; 

	// variable to check if a given state 
	// has been solved 
	static boolean[][] v = new boolean[maxLen][maskLen]; 

	// Function to find the minimum number of steps 
	// required to reach the end of the array 
	static int minSteps(int arr[], int i, int mask, int n) 
	{ 
		// base case 
		if (i == n - 1) 
		{ 
			return 0; 
		} 

		if (i > n - 1 || i < 0) 
		{ 
			return 9999999; 
		} 
		if ((mask >> i) % 2 == 1) 
		{ 
			return 9999999; 
		} 

		// to check if a state has 
		// been solved 
		if (v[i][mask]) 
		{ 
			return dp[i][mask]; 
		} 
		v[i][mask] = true; 

		// required recurrence relation 
		dp[i][mask] = 1 + Math.min(minSteps(arr, i - arr[i], (mask | (1 << i)), n), 
								minSteps(arr, i + arr[i], (mask | (1 << i)), n)); 

		// returning the value 
		return dp[i][mask]; 
	} 

	// Driver code 
	public static void main(String[] args) 
	{ 
		int arr[] = {1, 2, 2, 2, 1, 1}; 

		int n = arr.length; 

		int ans = minSteps(arr, 0, 0, n); 
		if (ans >= 9999999) 
		{ 
			System.out.println(-1); 
		} 
		else
		{ 
			System.out.println(ans); 
		} 
	} 
} 


