

//Time Complexity: O(state)*O(transition time)
//O(n)*O(1)=O(n)
//Space Complexity=O(n);
//Top Down DP:
class Solution {
	int Stair(vector<int>&cost, int i, int n, int* dp) {
		if (i >= n) {
			return 0;
		}

		if (dp[i] != -1) {
			return dp[i];
		}

		int op1 = Stair(cost, i + 1, n, dp) + cost[i];
		int op2 = Stair(cost, i + 2, n, dp) + cost[i];

		return dp[i] = min(op1, op2);
	}

public:
	int minCostClimbingStairs(vector<int>& cost) {
		int  n = cost.size();
		int *dp = new int[n + 1];

		for (int i = 0; i < n; i++) {
			dp[i] = -1;
		}
		int  Option1 = Stair(cost, 0, n, dp);

		for (int i = 0; i < n; i++) {
			dp[i] = -1;
		}
		int Option2 = Stair(cost, 1, n, dp);

		return min(Option1, Option2);

	}
};