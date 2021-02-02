import random
#a = [1,3,5,8,2,3,9,7,6]
a = []
for i in range (20):
    a.append ( random.randint(1,10) )
print(a)
size = max (a) + 1
dp = [0] * size

for i in a : dp [i] = 1

count =0
MaxCount = 0
ans = []
for i in range( size ) :
    if dp[i] == 0:
        count = 0
        ans = []
    else :
        count +=1
        ans.append(i)
    MaxCount = max (MaxCount, count)

print (MaxCount,ans)

