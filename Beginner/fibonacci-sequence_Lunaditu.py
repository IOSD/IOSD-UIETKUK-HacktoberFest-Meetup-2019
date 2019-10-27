def fibonacci(count:int):
	(f, l) = (0, 1)
	for a in range(count):
		(f, l) = (l, f+l)
	return f
#tests
tests = [
fibonacci(1), fibonacci(2), fibonacci(3),
fibonacci(4), fibonacci(5), fibonacci(6),
fibonacci(12), fibonacci(24), fibonacci(48),
]
print(tests)