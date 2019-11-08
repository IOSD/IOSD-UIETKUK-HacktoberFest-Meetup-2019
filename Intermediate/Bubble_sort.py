#Write a program for Bubble sort for user want to add n number sorting the they can do in python....

#defining function of bubblesort
def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]

#start main program
n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))
bubbleSort(arr)
print ("Sorted array is:")
for i in range(len(arr)):
    print ("%d" %arr[i]),
