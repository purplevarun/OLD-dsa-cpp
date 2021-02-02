class kadane {
	public static void main(String[] args) {
		int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
		int sum = 0, max = 0;

		for (int i:a) {
			sum += i;
			max = Math.max (max,sum);
			if (sum<0) sum = 0;
		}

		System.out.println(max);
	}
}