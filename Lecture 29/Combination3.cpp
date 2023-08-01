#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using  namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<string, int>>v;

	for (int i = 0; i < n; i++) {
		string x; int t;
		cin >> x >> t;

		v.push_back({x, t});
	}

	// vector<string>v;
	// vector<int>s;

	// for (int i = 0; i < n; i++) {
	// 	string x; int y;
	// 	cin >> x >> y;
	// 	v.push_back(x);
	// 	s.push_back(y);
	// }

	// sort(v.begin(), v.end());

	// for (int i = 0; i < n; i++) {
	// 	cout << v[i] << " " << s[i] << endl;
	// }

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}

}

// Mayank -500
// Samyak 1000
// Rahul 400
// Sarthak 5001
// Harsh 1000000


// Harsh 1000000
// Mayank -500
// Rahul 400
// Samyak 1000
// Sarthak 5001









