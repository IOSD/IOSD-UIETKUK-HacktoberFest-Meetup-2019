#Flip the bits of a given number
import math as m

def flipthebits(value): 
    x = int(m.log(value, 2.0) + 1)  #calculating number of bits in the number  
    
    for i in range(0, x):  #Inverting the bits one by one 
        value = (value ^ (1 << i))  
    print(value) 
  
# Driver code 
value = 12
flipthebits(value) #call the function
