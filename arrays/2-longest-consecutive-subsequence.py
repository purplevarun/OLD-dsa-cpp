a = [6,1,4,2,9,8,5]
print(a)
# print(sorted(a))
dp=[0]*100 # depends on constraints
for i in a:
	dp[i]=1
count = 0
Max = 0
for i in dp:
	if i==0: count = 0
	else : count+=1
	Max=max(Max,count)
print(Max)