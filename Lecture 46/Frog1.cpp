#include<bits/stdc++.h>
using namespace std;
const int N = 0;


//TC:O(n)*O(1);
//SC:O(n)
int Solve(int i, vector<int>&dp, vector<int>&height) {
	if (i == height.size() - 1) {
		return 0;
	}

	if (dp[i] != -1) {
		return dp[i];
	}

	int Option1 = INT_MAX;
	int Option2 = INT_MAX;

	Option1 = abs(height[i] - height[i + 1]) + Solve(i + 1, dp, height);

	if (i + 2 <= height.size() - 1) {
		Option2 = abs(height[i] - height[i + 2]) + Solve(i + 2, dp, height);
	}

	return dp[i] = min(Option1, Option2);
}

int main() {
	int n;
	cin >> n;

	vector<int>height(n);
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	vector<int>dp(n + 1, -1);

	cout << Solve(0, dp, height) << endl;
}