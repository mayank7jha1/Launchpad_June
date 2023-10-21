#include<iostream>
#include<cstring>
using  namespace std;
string s, t;
#define MAX 3000

int dp[MAX + 1][MAX + 1];

//TC: O(n^2)*O(1)
//SC: O(n^2)


int lenSolve(int i, int j) {

	if (i >= s.length() or j >= t.length()) {
		return 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	if (s[i] == t[j]) {
		return dp[i][j] = 1 + lenSolve( i + 1, j + 1);
	} else {
		return dp[i][j] = max(lenSolve( i + 1, j), lenSolve(i, j + 1));
	}
}


int main() {
	cin >> s >> t;

	memset(dp, -1, sizeof(dp));

	int ans = lenSolve(0, 0);
	cout << ans << endl;
}