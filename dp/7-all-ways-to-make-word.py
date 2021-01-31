def allWays(target,wordBank,dp={}):
	if target == "": return [[]]
	result = []
	for i in wordBank:
		if target.startswith(i):
			suffix = target[len(i):]
			ways = allWays(suffix,wordBank,dp)
			for x in ways : x.insert(0,i)
			result=result+ways
	return result		
if __name__ == '__main__':
	s1 = "abcd"
	s2 = "abcdefgh"
	s3 = "e"*10+"f"
	arr1 = ["cd","a","ab","b","bcd"]
	arr2 = ["abc","abcd","abcdefg","def","hh","gh","ef","h","g"]
	arr3 = ["ef","eaaee","ee","eeeeeee","fff","f"]
	
	# ans1 = allWays(s1,arr1)
	# for x in ans1:
	# 	print(x)
	
	ans2 = allWays(s2,arr2)
	for x in ans2:
		print(x)

	# ans3 = allWays(s3,arr3)
	# for x in ans3:
	# 	print(x)