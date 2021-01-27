def canSum(n,a,dp={}):
	if n in dp:
		return dp[n]
	if n == 0:
		return True
	if n < 0 :
		return False
	for i in a:
		if canSum(n-i,a,dp):
			dp[n] = True
			return True
	dp[n] = False
	return False
if __name__ == '__main__':
	n = int(input())
	a = [int(x) for x in input().split()]
	print(canSum(n,a))