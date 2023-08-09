#include<iostream>
#include<list>
using namespace std;
const int N = 0;

int main() {
	list<int>l1, l2;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		l1.push_front(x);
		l2.push_back(x);
	}

	for (int x : l1) {
		cout << x << " --> ";
	}
	cout << "NULL" << endl;

	for (int x : l2) {
		cout << x << " --> ";
	}
	cout << "NULL" << endl;

	l1.pop_back();
	l1.pop_front();

	l1.sort();
	l1.reverse();

	cout << l1.back() << endl;
	cout << l1.front() << endl;

	cout << l1.size() << endl;

	// l1.resize(20);

	for (int x : l1) {
		cout << x << " --> ";
	}
	cout << "NULL" << endl;

	for (int x : l2) {
		cout << x << " --> ";
	}
	cout << "NULL" << endl;

}