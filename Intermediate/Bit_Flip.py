num = int(input("Enter the Number: "))

temp = num
count = 0
while temp>0:
    count = (count<<1) + 1
    temp = temp>>1

if(num==0):
    print("Number After Flipping the Bits: "+str(1))
else:
    print("Number After Flipping the Bits: "+str(num^count))
