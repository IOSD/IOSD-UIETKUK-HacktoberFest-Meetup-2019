age=as.integer(readline(prompt="Enter the age:")) 
if(age>18)
    cat("Adult") 
else if(age<=18 && age>12)
    cat("Teen") 
else
    cat("Child") 
