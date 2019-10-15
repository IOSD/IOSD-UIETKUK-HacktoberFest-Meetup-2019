# Python3 code to demonstrate working of 
# Merge Python key values to list 
# Using setdefault() + loop 
  
# Initialize list 
test_list = [{'gfg' : 2, 'is' : 4, 'best' : 6},  
             {'it' : 5, 'is' : 7, 'best' : 8}, 
             {'CS' : 10}] 
  
# Printing original list 
print("The original list is : " + str(test_list)) 
  
# using setdefault() + loop 
# Merge Python key values to list 
res = {} 
for sub in test_list: 
    for key, val in sub.items():  
        res.setdefault(key, []).append(val) 
  
# printing result  
print("The merged values encapsulated dictionary is : " + str(res)) 
