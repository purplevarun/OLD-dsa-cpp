def canWord(target,wordBank,dp):
	if target in dp:
		return dp[target]
	if target == "":
		return 1
	count = 0
	for i in wordBank:
		if target.startswith(i):
			if canWord(target[len(i):],wordBank,dp):
				count += canWord(target[len(i):],wordBank,dp)
	dp[target] = count
	return count
if __name__ == '__main__':
	# print(canWord(input(),[x for x in input().split()],dp={}),)
	print(canWord("abcdefgh",["abc","abcd","abcdefg","def","hh","gh","ef","h"],dp={}))
	print(canWord("abcdefgh",["abc","abcd","abcdefg","def","hh","gh","ef","h","g"],dp={}))
	# print(canWord("abcdef",["ab","abc","cd","def","abcd","ef"],dp={}))
	# print(canWord("e"*100+"f",["e","eeee","eeeeeeee","eeeeee"],dp={}))