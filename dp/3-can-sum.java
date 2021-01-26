import java.util.HashMap;
class cansum{
	public static void main(String[] args) {
		int n = Integer.parseInt(args[0]);
		int a[]=new int[args.length-1];
		for(int i=0,j=1;j<args.length;j++)
			a[i++] = Integer.parseInt(args[j]);
		int size = args.length-1;
		
		System.out.println(canSum(n,a,new HashMap<Integer,Boolean>()));

	}
	static boolean canSum(int n,int a[],HashMap<Integer,Boolean> dp){
		if (dp.containsKey(n)) return dp.get(n);	
		if (n==0) return true;
		if (n<0) return false;
		for(int i:a){
			if(canSum(n-i,a,dp)==true) {
				dp.put(n,true);
				return true;
			}
		}
		dp.put(n,false);
		return false;
	}
}