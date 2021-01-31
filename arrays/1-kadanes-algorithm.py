a = [-2, -3, 4, -1, -2, 1, 5, -3]

Sum = 0
Max = 0

for i in a:
	Sum+=i
	Max=max(Sum,Max)
	if Sum<0: Sum=0

print(Max)