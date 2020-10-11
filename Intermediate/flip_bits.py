import math 
  
def bitsflipper(num): 
    len = int(math.log2(num)) + 1
    for i in range(len):  
        num = (num ^ (1 << i))
    return num

n = int(input("Enter a number: "))
print("The number obtained after flipping the bits is:",bitsflipper(n))
