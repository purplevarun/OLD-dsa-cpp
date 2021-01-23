class fibonacchi{
	public static void main(String[] args) {
		int n = Integer.parseInt(args[0]); // find nth fibo number
        long dp[] = new long[n+1];
        java.util.Arrays.fill(dp,-1);
        long fib = fibo(n,dp);
        System.out.println(fib);
	}
	static long fibo(int n,long []dp){
		if(dp[n]!=-1) return dp[n];
		if (n<=2) {
			return 1;
		}
		dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
		return dp[n];

	}
}