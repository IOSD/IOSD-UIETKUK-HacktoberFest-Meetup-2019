age = int(input("Enter your age: "))
if(age < 0 or age >100):
    print("Please enter a valid age")
elif(age <= 12):
    print("You are a child")
elif(age <= 18):
    print("You are a teenager")
else:
    print("You are an adult")
