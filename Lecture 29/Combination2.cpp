#include<iostream>
#include<vector>
#include<utility>
using  namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<string, int>>v;

	for (int i = 0; i < n; i++) {
		// int x;
		// cin >> x;
		// v.push_back(x);
		string x;
		int y;
		cin >> x >> y;
		// pair<string, int>p = make_pair(x, y);
		// v.push_back(p);

		// v.push_back(make_pair(x, y));

		v.push_back({x, y});
	}

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}
}