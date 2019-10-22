def fizzbuzz():

    for j in range (100):
        if j%3 ==0 and j%5 !=0:
            print('Fizz')
        elif j%5==0 and j%3!=0:
            print('Buzz')
        elif j%3 ==0 and j%5==0:
            print('Fizzbuzz')
        j=j+1



fizzbuzz()
