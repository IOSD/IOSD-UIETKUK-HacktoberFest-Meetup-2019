unsigned int reverseBits(unsigned int num) 
{ 
	unsigned int count = sizeof(num) * 8 - 1; 
	unsigned int reverse_num = num; 
	
	num >>= 1; 
	while(num) 
	{ 
	reverse_num <<= 1;	 
	reverse_num |= num & 1; 
	num >>= 1; 
	count--; 
	} 
	reverse_num <<= count; 
	return reverse_num; 
} 

int main() 
{ 
	unsigned int x = 1; 
	printf("%u", reverseBits(x)); 
	getchar(); 
} 
