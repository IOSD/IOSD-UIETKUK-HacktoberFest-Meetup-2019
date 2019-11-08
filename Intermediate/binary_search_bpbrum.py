# the actual algorithm
# arrays must be previously sorted
def binary_search(array, value):
    start = 0
    end = len(array) - 1
    while start <= end:
        mid = (end + start)//2
        if value == array[mid]:
            return mid
        elif value < array[mid]:
            end = mid - 1
        else:
            start = mid + 1
    return -1

# utility to get input for testing
def get_input():
    while True:
        try:
            test_num = int(input("Type a test number to search in the test array: "))
            return test_num
        except:
            print("Not a number. Try again.")
            continue
            
if __name__ == "__main__":
    # tests the function
    sorted_arr = [1, 2, 5, 9, 9, 11, 12, 13, 14, 17, 24, 45, 55, 73, 81, 101]
    print("Test array:", sorted_arr)
    num = get_input()
    result = binary_search(sorted_arr, num)
    if result > 0:
        print("Number found at index {} of the array".format(result))
    else:
        print("Number not found in the array")

    