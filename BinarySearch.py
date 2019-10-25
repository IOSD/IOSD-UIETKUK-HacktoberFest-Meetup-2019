lis=[]   # creating the list
num=int(input("enter the number of elements you want to enter"))
for i in range(num):
    num1=int(input("enter element"))
    lis.append(num1)
beg=0
end=num
find=int(input("enter the element you want to search"))
while(beg<end):
    mid=(beg+end)//2  # finding the midle element
    if(find<lis[mid]))  #checking the condition of smaller number
        end=mid-1
    elif find>lis[mid]:  # checking the condition of greater number
        beg=mid+1
    elif find == lis[mid]:  3the number is found
        pos=mid
        print("the element is found a position", pos)
        break
    
