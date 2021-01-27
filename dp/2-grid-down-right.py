def path(n,m,dp):
	if (n,m) in dp:
		return dp[(n,m)]
	if n==0 or m==0:
		return 0
	if n==1 and m==1:
		return 1
	dp[(n,m)] = path(n-1,m,dp) + path(n,m-1,dp)
	return dp[(n,m)]
if __name__ == '__main__':
	n,m = [int(x) for x in input().split()]
	print(path(n,m,dp={}))