#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using  namespace std;
#define int long long
int n, a, b, k, f;

// bool compare(int x, int y) {

// 	if (x > y) {
// 		return true;
// 	} else {
// 		return false;
// 	}
// }

int Travel_Card() {
	cin >> n >> a >> b >> k >> f;
	string prev_dest = "";

	map<pair<string, string>, int>mp;


	for (int i = 0; i < n; i++) {
		string starting_point, ending_point;
		cin >> starting_point >> ending_point;
		int Price;
		if (prev_dest == starting_point) {
			Price = b;
		} else {
			Price = a;
		}
		prev_dest = ending_point;
		if (starting_point > ending_point) {
			swap(starting_point, ending_point);
		}
		mp[ {starting_point, ending_point}] += Price;
	}

	// for (auto x : mp) {
	// 	cout << x.first.first << " " << x.first.second << " " << x.second << endl;
	// }
	// cout << endl;

	vector<int>cost;
	int Total_Cost = 0;

	for (pair<pair<string, string>, int> x : mp) {
		cost.push_back(x.second);
		Total_Cost += x.second;
	}
	//cout << Total_Cost << endl;

	// sort(cost.rbegin(), cost.rend());
	// sort(cost.begin(), cost.end());
	// reverse(cost.begin(), cost.end());

	//sort(cost.begin(), cost.end(), compare);

	sort(cost.begin(), cost.end(), greater<int>());

	// for (auto x : cost) {
	// 	cout << x << " ";
	// }
	// cout << endl;

	for (int i = 0; i < k; i++) {
		if (cost[i] >= f) {
			Total_Cost = Total_Cost - cost[i] + f;
		} else {
			break;
		}
	}
	//cout << Total_Cost << endl;
	return Total_Cost;
}

int32_t main() {
	cout << Travel_Card() << endl;
}





