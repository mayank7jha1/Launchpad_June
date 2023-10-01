class Solution {
public:
	int candy(vector<int>& ratings) {
		int n = ratings.size();
		int candy[n];

		for (int i = 0; i < n; i++) {
			candy[i] = 1;
		}

		//Left to right comparison
		for (int i = 1; i < n; i++) {
			if (ratings[i] > ratings[i - 1]) {
				candy[i] = candy[i - 1] + 1;
			}
		}

		//Right to left comparison

		for (int i = n - 2; i >= 0; i--) {
			if (ratings[i] > ratings[i + 1]) {
				candy[i] = max(candy[i], candy[i + 1] + 1);
			}
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans += candy[i];
		}

		return ans;
	}
};