class subsequence {
	public static void main(String[] args) {
		int a[] = {6,1,4,2,9,8,5};
		int dp[] = new int [1000001];
		for(int i:a) dp[i] = 1;
		int count = 0, max = 0;
		for(int i:dp) {
			if (i == 0) count = 0;
			else count ++;
			max = Math.max (max,count);
		}
		System.out.println(max);
	}
}