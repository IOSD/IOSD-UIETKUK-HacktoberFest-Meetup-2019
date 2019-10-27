groups = { 0:"child", 1:"teen", 2:"adult" }
def get_age_group(age:int):
	if (age < 10): return groups[0]
	if (10 < age <= 18): return groups[1]
	if (18 < age): return groups[2]
#tests
tests = [
get_age_group(3), get_age_group(67), get_age_group(15), get_age_group(24),
get_age_group(12), get_age_group(7), get_age_group(18),
get_age_group(35), get_age_group(9), get_age_group(43),
]
print(tests)