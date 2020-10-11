######################         Code By - ORASHAR          #########################
###################### Age check fro child, teen or adult #########################

try:
    n = int(input("Enter  the number: "))
    if n < 10:
        print("child")
    elif n <= 18:
        print("teenager")
    else:
        print("adult")

except:
    print("Invalid input!")
