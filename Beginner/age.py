while True:
    try:
        a = int(input("enter your age :"))
        if a > 18:
            print("Adult")
        elif 10 < a <= 18:
            print("Teen")
        elif a <= 10:
            print("Child")
        break
    except ValueError:
        print("enter valid age")
        break
