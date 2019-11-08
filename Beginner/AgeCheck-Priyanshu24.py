age = int(input("Enter age of the person: "))


def agecheck(age):
    if 10 < age <= 18:
        print("Teen")
    elif age < 10:
        print("Child")
    else:
        print("Adult")


agecheck(age)