age = int(input("How old are you ?"))
if(age >= 0):
    if(age < 10):
        print("child")
    elif(age > 18):
        print("adult")
    else:
        print("teen")
else:
    print("Invalid age!")