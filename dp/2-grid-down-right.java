class grid1{
	public static void main(String args[]){
		int n = Integer.parseInt(args[0]),m = Integer.parseInt(args[1]);
		long dp[][] = new long[n+1][m+1];
		for(long x[]:dp) java.util.Arrays.fill(x,-1);
		long steps = grid(n,m,dp);
		System.out.println(steps);
	}
	static long grid(int n,int m,long[][] dp){
		if(dp[n][m]!=-1) return dp[n][m];
		if (n==0 || m==0)
			return 1;
		
		if (n==1 && m==1)
			return 1;
		
		dp[n][m] = grid(n-1,m,dp) + grid(n,m-1,dp);
			
		return dp[n][m];
	}
}