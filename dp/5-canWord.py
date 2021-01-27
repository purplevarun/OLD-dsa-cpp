def canWord(target,wordBank):
	if target == "":
		return True
	for i in wordBank:
		if target.startswith(i):
			if canWord(target[len(i):],wordBank):
				return True
	return False
if __name__ == '__main__':
	target = input()
	wordBank = [x for x in input().split()]
	print(canWord(target,wordBank))