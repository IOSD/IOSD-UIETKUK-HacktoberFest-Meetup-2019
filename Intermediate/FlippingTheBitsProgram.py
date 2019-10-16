def revbits(number,bitsize):
     binary = bin(number) 
     reverse = binary[-1:1:-1] 
     reverse = reverse + (bitsize - len(reverse))*'0'
     print(int(reverse,2))

if __name__ == "__main__": 
    number = 3
    bitsize = 32
    revbits(number,bitsize) 
