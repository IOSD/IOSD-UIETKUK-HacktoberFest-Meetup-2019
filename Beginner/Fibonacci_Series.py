def fib_seq(n):
    fib_ser="1"
    fib_otro="0"
    n=int(n)
    if n>2:
        series = fib_otro +","+fib_ser
        for i in range(1, n-1):
            sum=int(fib_ser)+int(fib_otro)
            fib_otro=fib_ser
            fib_ser=sum
            series = series + "," + str(fib_ser)
    elif n==1:
        series="0"
    elif n==2:
        series="0,1"
    return series

n=""
while not n.isdigit():
    n=input("Enter your Number: ")
    if n.isdigit():
        if int(n)<1:
            n=""
print(fib_seq(n))
input("Enter")
