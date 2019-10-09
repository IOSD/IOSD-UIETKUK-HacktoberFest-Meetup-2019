#Binary search

t = int(input("How many no you want to enter"))
A = []
for i in range(t):
	A.append(int(input("Enter the numbers")))
  
A.sort()
start = 0
end = t
mid = int((start+end)/2)
x = int(input("Enter number to be searched"))
flag = 0


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
