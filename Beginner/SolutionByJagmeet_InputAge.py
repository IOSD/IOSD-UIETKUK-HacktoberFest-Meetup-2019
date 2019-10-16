def age(input_age):
    
    if(input_age<10):
        print("Child")
        
    elif(10<input_age<=18):
        print("Teen")
        
    elif(input_age>18):
        print("Adult")
    
    
    
input_age = int(input("Enter the age:"))
age(input_age)
