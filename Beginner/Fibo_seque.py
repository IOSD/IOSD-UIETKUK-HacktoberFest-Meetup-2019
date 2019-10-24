def fib_seq(n):
    ser="1"
    otro="0"
    n=int(n)
    if n>2:
        series = otro +","+ser
        for i in range(1, n-1):
            sum=int(ser)+int(otro)
            otro=ser
            ser=sum
            series = series + "," + str(ser)
    elif n==1:
        series="0"
    elif n==2:
        series="0,1"
    return series

n=""
while not n.isdigit():
    n=input("num: ")
    if n.isdigit():
        if int(n)<1:
            n=""
print(fib_seq(n))
input("Enter")