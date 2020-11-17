def check(num):
    if (num % 2) == 0:
        return "Number is Even"
    else:
        return "Number is Odd"

num = int(input("Enter a Number: "))
ans = check(num)
print("{} is {}".format(num,ans)) 
