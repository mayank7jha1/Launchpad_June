#include<bits/stdc++.h>
using namespace std;
const int N = 0;


//TC:O(n)*O(k);
//SC:O(n)
int Solve(int i, vector<int>&dp, vector<int>&height, int k) {
	if (i >= height.size()) {
		return 1e9;
	}

	if (i == height.size() - 1) {
		return 0;
	}

	if (dp[i] != -1) {
		return dp[i];
	}

	int ans = INT_MAX;

	for (int j = 1; j <= k; j++) {
		ans = min(ans, abs(height[i] - height[i + j]) + Solve(i + j, dp, height, k));
	}

	return dp[i] = ans;
}

int main() {
	int n, k;
	cin >> n >> k;

	vector<int>height(n);
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	vector<int>dp(n + 1, -1);

	cout << Solve(0, dp, height, k) << endl;
}