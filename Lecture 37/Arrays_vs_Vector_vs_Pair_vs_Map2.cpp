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
	vector<string>person;
	vector<int>cost;

	for (int i = 0; i < n; i++) {
		string x; int y;
		cin >> x >> y;
		c.push_back(make_pair(x, y));
		person.push_back(x);
		cost.push_back(y);
	}

	/*
		This by default compares element one by one from left to right.
		I mean it this sort function will first compare the first
		element of the pair and try to sort the elements on that basis
		now if you elements of the vector have the same first value
		then it will compare the second element and then sort on the basis
		of that and so on.

	*/
	sort(c.begin(), c.end());
	Print_Vector(c);
	cout << endl << endl << endl;

	cout << person[2] << " " << cost[2] << endl;
	sort(person.begin(), person.end());

	cout << person[3] << " " << cost[3] << endl;

}