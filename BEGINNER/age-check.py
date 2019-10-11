#input The Age, if age > 18 print adult , if 10 < age <= 18 print teen, if age < 10 print child

age = int(input("How old are you ? "))
if(age >= 0):
    if(age < 10):
        print("You are a child.")
    elif(age > 18):
        print("You are an adult.")
    else:
        print("You are a teen.")
else:
    print("Invalid age!")
