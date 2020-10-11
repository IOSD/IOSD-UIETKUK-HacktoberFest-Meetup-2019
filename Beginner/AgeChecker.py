# Importing the Sys Module

import sys



def ageChecker(age):
    if(age >= 0):
        if(age > 18):
            return 'adult'
        elif(age > 10 and age <= 18):
            return 'teen'
        elif(age < 10 and age >= 0):
            return 'child'
    elif (age < 0):
        return "Age Shouldn't be Negative"


personAge = sys.stdin.readline()

personAge = int(personAge)

result = ageChecker(personAge)

print(result)