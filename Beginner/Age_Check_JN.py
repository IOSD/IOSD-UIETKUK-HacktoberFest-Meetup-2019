
def main():
  input_value = input('Enter your age: ')
  age = int(input_value)

  if age > 18:
    print('You are an adult')
  elif 10 < age <= 18:
    print('You are a teen')
  elif age < 10:
    print('You are a child')
  else:
    print('Try again')

if __name__ == '__main__':
  main()
