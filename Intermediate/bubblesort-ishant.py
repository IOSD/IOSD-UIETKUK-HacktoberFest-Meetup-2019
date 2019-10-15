import numpy as np

def bubbleSort(arr):
    n = len(arr)
    for i in range (n):
        for j in range(0, n-i-1):



            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]


array_size = np.random.randint(10,100,1) #Generates a random integer between 10 and 30 which is the size of array

print("The size of the random array is " + str(array_size))

random_array = np.random.randint(1,10000, array_size) #generates a random array of size (array_size) with values between 1 and 1000

print("The unsorted random array is ")
print(random_array)

print("The sorted random array is:")
bubbleSort(random_array)

for i in range(len(random_array)):
    print (random_array[i], end = " < ") 