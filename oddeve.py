def check(num):
    if (num % 2) == 0:
        return "Even"
    else:
        return "Odd"

num = int(input("Enter a number: "))
ans = check(num)
print("{} is {}".format(num,ans)) 
