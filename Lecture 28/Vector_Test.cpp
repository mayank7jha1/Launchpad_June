#include<iostream>
#include"Vector.h"
using  namespace std;

int main() {
	Vector<char>v;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char x;
		cin >> x;
		v.push_back(x);
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v.back() << endl;
	cout << v.front() << endl;
	v.pop_back();

	cout << v.size() << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.capacity() << endl;
}