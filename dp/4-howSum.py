def howSum(n,a,dp={}):
	if n in dp :
		return dp[n]
	if n == 0 :
		return []
	if n < 0 :
		return None
	for i in a:
		result = howSum(n-i,a,dp)
		if result != None:
			dp[n] = result + [i]
			return dp[n]
	dp[n] = None
	return None
if __name__ == '__main__':
	n = int(input())
	a = [int(x) for x in input().split()]
	print(howSum(n,sorted(a,reverse=True)))