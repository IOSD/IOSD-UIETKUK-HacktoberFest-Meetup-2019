# Code for Binary Search
# Code For Binary Search
# ANKUR-251701105

n = int(input("Enter size of Array")) # To find the size of array
A = []
for i in range(n):
	A.append(int(input("Enter the number")))
  #Dyamic memory allocation
A.sort() # sorts according to sorting
start = 0
end = n
mid = int((start+end)/2)
x = int(input("Enter number to be searched"))
flag = 0
#search algo
while(True):
	if x == A[mid]:
		print(x,"Number found at position",mid+1)
		flag+=1
		break
	elif x>A[mid]:
		start=mid+1
		mid = int((start+end)/2)
	elif x<A[mid]:
		end = mid-1
		mid = int((start+end)/2)

if flag ==0:
	print(x,"Number not found")
