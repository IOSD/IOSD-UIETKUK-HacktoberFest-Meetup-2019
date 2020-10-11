def bubble_sort(arr):
    """
    bubble sort implementaiton by aman goyal
    """
    arr_len = len(arr)
    for i in range(arr_len - 1, 0, -1):
        for j in range(i):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr


print(bubble_sort([13, 9, 8, 7, 6, 5, 4, 3, 2, 1, 12]))

