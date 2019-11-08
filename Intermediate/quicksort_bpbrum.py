# quicksort algorithm
# recursively sorts an array
def quicksort(array, low, high):
    if low < high:
        # partition
        p = partition(array, low, high)
        # sort lower values
        quicksort(array, low, p)
        # sort higher values
        quicksort(array, p + 1, high)
    return array

# function to partition the array
def partition(array, low, high):
    pivot = array[(low + (high - low)//2)]
    i = low - 1
    j = high + 1
    while True:
        while True:
            i = i + 1
            # needs to be swapped or is the pivot
            if array[i] >= pivot:
                break
        while True:
            j = j - 1
            # needs to be swapped or is the pivot
            if array[j] <= pivot:
                break
        if i >= j:
            return j
        # swap array[j] and array[i]     
        aj = array[j]
        array[j] = array[i]
        array[i] = aj
        
if __name__ == "__main__":
    # test the algorithm
    arr = [2, 5, 9, 11, 14, 81, 73, 1, 101, 55, 12, 13, 45, 24, 17, 9]
    print("Test unsorted array:", arr)
    print("Sorting using quicksort")
    sorted_arr = quicksort(arr, 0, len(arr)-1)
    print("Sorted array:", arr)