def fibo(n,dp={}):
	if n in dp:
		return dp[n]
	if n == 0:
		return 0
	if n <= 2:
		return 1
	dp[n] = fibo(n-1,dp) + fibo(n-2,dp)
	return dp[n]
if __name__ == '__main__':
	n = int(input())
	print(fibo(n))