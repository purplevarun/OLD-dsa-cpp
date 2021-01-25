import java.util.*;
class howSum{
	public static void main(String[] args) {
		int n = Integer.parseInt(args[0]);
		int a[]=new int[args.length-1];
		for(int i=0,j=1;j<args.length;j++)
			a[i++] = Integer.parseInt(args[j]);
		int size = args.length-1;
		Arrays.sort(a); reverse(a);
		System.out.println(howsum(n,a,new HashMap<Integer,ArrayList<Integer>>()));
	}
	static ArrayList<Integer> howsum(int n,int a[],HashMap<Integer,ArrayList<Integer>> dp){
		if (dp.containsKey(n)) return dp.get(n);
		if (n==0) return new ArrayList<Integer>();	
		if (n<0) return null;
		for (int i:a){
			ArrayList<Integer> result = howsum(n-i,a,dp);
			if(result!=null){
				result.add(i);
				dp.put(n,result);
				return result;
				
			}
		}
		dp.put(n,null);
		return null;
	}
	static void reverse(int a[]){
		int b[] = new int[a.length];
		for(int i=0;i<a.length;i++)b[i]=a[i];
		for(int i=a.length-1,j=0;i>=0;i--)a[j++]=b[i];
	}
}