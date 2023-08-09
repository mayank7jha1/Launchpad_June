#include<iostream>
#include<forward_list>
using namespace std;
const int N = 0;

int main() {
	forward_list<int>f;

	// f.push_front(10);
	// f.push_front(20);
	// f.push_front(30);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		f.push_front(x);
	}

	f.pop_front();

	for (int x : f) {
		cout << x << " --> ";
	}
	cout << "NULL" << endl;

	for (forward_list<int>::iterator it = f.begin(); it != f.end(); it++) {
		cout << (*it) << " --> ";
	}
	cout << "NULL" << endl;


	forward_list<int>f2 = f;
	for (int x : f2) {
		cout << x << " --> ";
	}
	cout << "NULL" << endl;




}