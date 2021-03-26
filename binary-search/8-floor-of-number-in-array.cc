#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector <int>
#define pb push_back
int solve (vi A, int X) {
	int N = A.size();
	int low = 0, high = N-1;
	while (low <= high) {
		int mid = low + (high - low)/2;

	}
	return N;
}
int32_t main () {
	// floor of a number is greatest element
	// smaller than the number
	vi A {1,2,8,10,10,12,19};
	int X = 5;
	int Output = 1; // index of 2 which is the floor of 5
	if (solve(A,X) == Output)
		cout << "Test Case Passed" << endl;
	else cout << "Test Case Failed" << endl;
}