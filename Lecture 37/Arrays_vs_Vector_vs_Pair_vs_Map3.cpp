#include<iostream>
#include<vector>
#include<utility>
#include<map>
#include<algorithm>
using namespace std;

void Print_Vector(vector<pair<string, int>>&c) {
	for (int i = 0; i < c.size(); i++) {
		cout << c[i].first << " " << c[i].second << endl;
	}
	// cout << endl << endl;;
	// for (pair<string, int> x : c) {
	// 	cout << x.first << " " << x.second << endl;
	// }
	// cout << endl << endl;;
	// for (auto it = c.begin(); it != c.end(); it++) {
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }
}


int main() {
	int n;
	cin >> n;

	vector<pair<string, int>>c;
	map<string, int>mp;

	for (int i = 0; i < n; i++) {
		string x; int y;
		cin >> x >> y;
		c.push_back(make_pair(x, y));
		// mp.insert(make_pair(x, y));
		mp.insert({x, y});
	}

	sort(c.begin(), c.end());
	Print_Vector(c);
	cout << endl << endl << endl;

	cout << mp["Sarthak"] << endl;//O(1)

	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}

	//Check if Anil as a key is present in map or not?

	if (mp.find("Anil") != mp.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}


	if (mp.count("Anil") == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}


}

//Unique Keys and Sorted Keys: