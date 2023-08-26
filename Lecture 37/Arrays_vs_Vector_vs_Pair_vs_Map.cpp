#include<iostream>
#include<vector>
#include<utility>
#include<map>
using namespace std;

void Print_Static_Array(pair<string, int>*a, int n) {
	cout << "For Loop to Print a Static Array " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i].first << " " << a[i].second << endl;
	}
}

void Print_Dynamic_Array(pair<string, int>*b, int n) {
	for (int i = 0; i < n; i++) {
		cout << b[i].first << " " << b[i].second << endl;
	}
}

void Print_Vector(vector<pair<string, int>>&c) {
	for (int i = 0; i < c.size(); i++) {
		cout << c[i].first << " " << c[i].second << endl;
	}
	cout << endl;
	for (pair<string, int> x : c) {
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for (auto it = c.begin(); it != c.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
}


int main() {
	int n;
	cin >> n;

	//  Static Array of Pair: Where Every Index is a Pair. a[i]--->is a pair.
	pair<string, int>a[n];

	// Dynamic Array of Pair: Where Every Index is a Pair. a[i]--->is a pair.
	pair<string, int> *b = new pair<string, int>[n];

	//Vector of Pair: Where Every Index is a Pair. a[i]--->is a pair.
	vector<pair<string, int>>c;

	for (int i = 0; i < n; i++) {
		string x; int y;
		cin >> x >> y;
		a[i] = make_pair(x, y);
		// a[i]={x,y};

		b[i] = make_pair(x, y);
		// c[i] = make_pair(x, y);//This is not okay as you have not specified the size of vector.
		// c.push_back({x, y});
		c.push_back(make_pair(x, y));
	}

	cout << "The Static Array Output is : " << endl;
	Print_Static_Array(a, n);
	cout << endl << endl;

	cout << "The Dynamic Array Output is : " << endl;
	Print_Dynamic_Array(b, n);
	cout << endl << endl;

	cout << "Vector Output is : " << endl;
	Print_Vector(c);



}