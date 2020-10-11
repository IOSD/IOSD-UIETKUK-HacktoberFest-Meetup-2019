# Code for Adult age
# By Ebuka

import re

age = input("Enter your age")

try:
    int_age = int(age)
except TypeError:
    raise TypeError("Age is not valid")

if int_age >= 18:
    print("Access granted")
else:
    print("Access Denied")