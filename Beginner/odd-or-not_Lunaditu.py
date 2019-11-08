def is_odd(number:int):
	return bool(number%2)
#tests
tests = [
is_odd(1), is_odd(2), is_odd(3),
is_odd(6), is_odd(13), is_odd(26),
is_odd(53), is_odd(106), is_odd(213),
]
print(tests)