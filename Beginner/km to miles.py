# Python Program - Convert Kilometres to Miles

print("Enter 'x' for exit.")
km = input("Enter total kilometres: ")
if km == 'x':
    exit();
else:
    kilometres = float(km)
    conversion_factor = 0.621371
    miles = kilometres * conversion_factor
    print("%0.2f Kilometres = %0.2f Miles.\n" %(kilometres,miles))
