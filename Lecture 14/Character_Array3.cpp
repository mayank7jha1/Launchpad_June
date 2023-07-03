#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	char b[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}

	int c[] = {1, 2, 3, 3, 4, 5};

	char d[] = {'M', 'a', 'y', 'a', 'n', 'k'};

	char ch = 'M';
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << c[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << d[i] << " ";
	}


}



















