#Input The Age, if age > 18 print adult , if 10 < age <= 18 print teen, if age < 10 print child
age=int(input("Enter the number:"))
if age>18:
    print("adult")
elif age>10 and age<=18:
    print("teen")
else:
    print("child")
    
