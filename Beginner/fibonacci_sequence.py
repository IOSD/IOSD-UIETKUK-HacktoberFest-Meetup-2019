n = int(input("Enter the number of terms required: "))

a = 0
b = 1
count = 0


if n <= 0:
   print("Please enter a valid number")
else:
   print("The first {} terms of Fibonacci sequence are:".format(n))
   while count < n:
       if(count!=n-1):
           print(a,end=', ')
       else:
           print(a)
       c = a + b
       a = b
       b = c
       count+=1
