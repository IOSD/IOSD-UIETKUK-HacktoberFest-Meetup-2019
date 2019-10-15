def bubblesort(A):
    for i in range(len(A)):
        for k in range(len(A) - 1, i, -1):
            if (A[k] < A[k - 1]):
                swap(A,k,k-1)
def swap(A,x,y):
    temp = A[x]
    A[x] = A[y]
    A[y] = temp
A= [534,689,235,124,525,216,134,356]
bubblesort(A)
print(A)

