#include<iostream>
#include<utility>
#include<vector>
using  namespace std;

//You can use a container as a data type.

int main() {
	// pair<string, int>p;
	// cin >> p.first >> p.second;

	// cout << p.first << " " << p.second << endl;

	// pair<string, int>p1;
	// cin >> p1.first >> p1.second;

	// cout << p1.first << " " << p1.second << endl;

	//THis means an array of size 10 and every element is
	//a integer i.e a[i]= an integer.
	int a[10];
	int n;
	cin >> n;

	//THis means an array of size n and every element is a pair
	//i.e. p[i]= a pair whos first value can be retrieved using
	//p[i].first and second using p[i].second.

	//array of pair.
	pair<string, int> p2[n];

	for (int i = 0; i < n; i++) {
		cin >> p2[i].first >> p2[i].second;
	}

	for (int i = 0; i < n; i++) {
		cout << p2[i].first << " " << p2[i].second << endl;
	}
	cout << endl;

	vector<int>v(n);
	// pair<string, int>

	//THis is a dynamic array of size n and every element
	//of this vector is a pair of string and int.

	//v[i]--->pair of string and int

	vector<pair<string, int>>v1(n);

	for (int i = 0; i < n; i++) {
		cin >> v1[i].first >> v1[i].second;
	}

	for (int i = 0; i < n; i++) {
		cout << v1[i].first << " " << v1[i].second << endl;
	}

}









