num=0
num1=1 
j=int(input("enter the number till where you want to see the fibonacci series"))
j=j-2
print(num)
print(num1)
for i in range(j):
    next1=num+num1
    print(next1)
    num=num1
    num1=next1
