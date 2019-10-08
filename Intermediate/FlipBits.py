  
def reverseBits(num,bitSize): 

     binary = bin(num) 
 
     reverse = binary[-1:1:-1] 
     reverse = reverse + (bitSize - len(reverse))*'0'

     print int(reverse,2) 

if __name__ == "__main__": 
    num = 1
    bitSize = 32
    reverseBits(num,bitSize) 