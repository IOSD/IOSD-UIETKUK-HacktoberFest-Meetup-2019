def string_k(k, str): 
      
    # create the empty string 
    string = [] 
      
    # split the string where space is comes 
    text = str.split(" ") 
      
    # iterate the loop till every substring 
    for x in text: 
          
        # if length of current sub string 
        # is greater than k then 
        if len(x) > k: 
              
            # append this sub string in 
            # string list 
            string.append(x) 
              
     # return string list 
    return string 
  
  
# Driver Program      
k = 3
str ="geek for geeks"
print(string_k(k, str))  
