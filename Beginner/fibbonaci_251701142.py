num1=0
num2=1
print("enter the number upto which series is to be printed")
n=int(input())
print("fibbonaci series ")
for i in range(1,n):
	print(num1,end=' ')
	num3=num1+num2
	num1=num2
	num2=num3
