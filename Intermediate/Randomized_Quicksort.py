# Randomized QuickSort

def inPlaceQuickSort(A,start,end):
    e = time.clock()
    if start<end:
        pivot=randint(start,end)
        temp=A[end]
        A[end]=A[pivot]
        A[pivot]=temp
        
        p=inPlacePartition(A,start,end)
        inPlaceQuickSort(A,start,p-1)
        inPlaceQuickSort(A,p+1,end)
    return A    


def inPlacePartition(A,start,end):
    pivot=randint(start,end)
    temp=A[end]
    A[end]=A[pivot]
    A[pivot]=temp
    newPivotIndex=start-1
    for index in range(start,end):
        if A[index]<A[end]:#check if current val is less than pivot value
            newPivotIndex=newPivotIndex+1
            temp=A[newPivotIndex]
            A[newPivotIndex]=A[index]
            A[index]=temp
    temp=A[newPivotIndex+1]
    A[newPivotIndex+1]=A[end]
    A[end]=temp
    return newPivotIndex+1
