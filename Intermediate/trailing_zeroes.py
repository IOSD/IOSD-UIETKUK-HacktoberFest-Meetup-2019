x=input("Enter a number to find count of trailing zeros of its factorial:")
count=0
try:
  y = int(x)
except ValueError:
  print("Invalid input..only integers are allowed.")  

for i in range(1,y):
  y*=i
for j in str(y):
  if j=="0":
    count+=1
print("The number of trailing zeros in the factorial of",x,"is",count,".")    
