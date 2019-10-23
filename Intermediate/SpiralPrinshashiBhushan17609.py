Spiral Print
Given an N*M 2D array, print it in spiral form. That is, first you need to print the 1st row, then last column, then last row and then first column and so on.
Print every element only once.
Input format :
Line 1 : N and M, No. of rows & No. of columns (separated by space) followed by N*M  elements in row wise fashion.
Sample Input :
 4 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
Sample Output :
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
def spiralPrint(m,n,arr):
    k=0 #starting row index
    l=0 #starting column index
    while(k < m and l < n):
        for i in range(l,n):
            print(arr[k][i],end=" ")
        k=k+1
        for i in range(k,m):
            print(arr[i][n-1],end=" ")
        n=n-1
        if(k<m):
            for i in range(n-1,(l-1),-1):
                print(arr[m-1][i],end=" ")
            m=m-1
        if(l<n):
            for i in range(m-1,k-1,-1):
                print(arr[i][l],end=" ")
            l=l+1    
l=[int(i) for i in input().strip().split(' ')]
m, n=l[0], l[1]
arr = [ [ l[(j*n)+i+2] for i in range(n)] for j in range(m)]
spiralPrint(m,n,arr)
