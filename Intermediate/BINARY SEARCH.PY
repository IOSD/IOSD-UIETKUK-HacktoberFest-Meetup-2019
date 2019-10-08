##ITERATIVE WAY TO SOLVE BINARY PROBLEM IN PYTHON
def binarySearch(arr, l, r, n): 
  
    while l <= r: 
        mid = l + (r - l)/2; 
       
        if arr[mid] == x: 
            return mid 
  
    
        elif arr[mid] < x: 
            l = (mid + 1)
  
        else: 
            r = (mid - 1 ) 
        
        
        return -1
a = [ 21, 32, 43, 10, 80 ] 
x = 10
  

result = binarySearch(a, 0, len(arr)-1, n) 
  
if (result != -1): 
    print "Element is present at index %d" % result 
else: 
    print "Element is not present in array"
