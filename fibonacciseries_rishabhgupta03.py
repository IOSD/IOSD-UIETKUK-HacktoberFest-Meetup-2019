a=0
b=1
show=0
n=input("enter the nomber for fibonacci series : ")
print (a)
print (b)
for i in range(int(n)-1):
    show=a+b
    a=b
    b=show
    print (show)
    
