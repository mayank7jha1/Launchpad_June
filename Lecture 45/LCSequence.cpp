class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		set<int>s;
		int count = 0;
		int ans = 0;

		for (int x : nums) {
			s.insert(x);
		}

		for (int i = 0; i < nums.size(); i++) {
			if (s.count(nums[i] - 1) == 1) {
				continue;
			} else {
				//This is the starting point of the sequence.
				count = 0;
				int x = nums[i];

				while (s.count(x) == 1) {
					count++;
					x++;
				}
				ans = max(count, ans);
			}
		}
		return ans;
	}
};