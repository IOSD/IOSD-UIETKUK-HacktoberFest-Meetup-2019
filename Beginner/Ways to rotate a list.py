# initializing list 
test_list = [1, 4, 6, 7, 2] 
  
# printing original list  
print ("Original list : " + str(test_list)) 
  
# using slicing to left rotate by 3 
test_list = test_list[3:] + test_list[:3] 
  
# Printing list after left rotate 
print ("List after left rotate by 3 : " + str(test_list)) 
  
# using slicing to right rotate by 3 
# back to Original 
test_list = test_list[-3:] + test_list[:-3] 
  
# Printing after right rotate 
print ("List after right rotate by 3(back to original) : "
                                         + str(test_list)) 
