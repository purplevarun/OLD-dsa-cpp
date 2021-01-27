def canWord(target,wordBank,dp={}):
	if target in dp:
		return dp[target]
	if target == "":
		return True
	for i in wordBank:
		if target.startswith(i):
			if canWord(target[len(i):],wordBank,dp):
				dp[target] = True
				return True
	dp[target] = False
	return False
if __name__ == '__main__':
	print(canWord("abcdef",["ab","abc","cd","def","abcd"]))
	print(canWord("e"*100+"f",["e","eeee","eeeeeeee","eeeeee"]))