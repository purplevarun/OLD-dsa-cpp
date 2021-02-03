a = [-2,-5,3,1,-1,2]
MaxSum = 0
Sum = 0
for i in a:
    Sum += i
    MaxSum = max (MaxSum, Sum)
    if Sum < 0 : Sum = 0

print (MaxSum)