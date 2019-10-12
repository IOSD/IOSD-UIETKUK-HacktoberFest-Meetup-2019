age=int(input("enter ur age:"))
if age>=0:
    if age > 18:
        print("adult")
    elif age < 10:
        print("child")
    else:
        print("teen")
else:
    print("invalid age")
