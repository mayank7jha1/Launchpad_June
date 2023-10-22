#include<iostream>
#include<algorithm>
using  namespace std;
int n, p, k;
int cost[100005] = {0};


//O(nlogn+n)
int Price() {
	int pre[100005] = {0};
	sort(cost, cost + n);

	for (int i = 0; i < n; i++) {
		if (i < k - 1) {
			pre[i] = cost[i] + ((i == 0) ? 0 : pre[i - 1]);
		} else if (i == k - 1) {
			pre[i] = cost[i];
		} else {
			pre[i] = cost[i] + pre[i - k];
		}
	}


	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (pre[i] <= p) {
			ans = i + 1;
		}
	}

	return ans;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n >> p >> k;
		for (int i = 0; i < n; i++) {
			cin >> cost[i];
		}
		cout << Price() << endl;
	}
}


// k=3

// 0 1 2

// cost[0]+cost[1]

