def is_int(entered_age):
    if type(entered_age) == type(0):
        return True
    elif entered_age.isnumeric():
            return True
    else:
        return False

running = True

while running:
    age = input("please enter your age: ")
    if is_int(age):
        age = int(age)
        if age <= 10:
            print("child")
        elif age <= 18:
            print("teen")
        else:
            print("adult")
        running = False
    else:
        print("that's not a number! please enter a number!")
