class canword{
	public static void main(String[] args) {
		String Word = args[0];
		int n = args.length;
		String s[] = new String[n-1];
		for(int i=1,j=0;i<n;i++) s[j++] = args[i];
		System.out.println(canWord(Word,s));		
		
	}
	static boolean canWord(String target,String wordBank[]){
		if (target == "") return true;
		for(String word : wordBank){
			if (target.startsWith(word)){
				String suffix = target.substring(word.length());
				if (canWord(suffix,wordBank) == true) return true;
			}
		}
		return false;
	}
}