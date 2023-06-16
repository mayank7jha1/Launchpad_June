#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	// int i = 1;
	// int t;

	// while (i <= n) {
	// 	cin >> t;
	// 	cout << t << " ";
	// 	i = i + 1;
	// }

	int a[n];
	// cin >> a[0];
	// cin >> a[1];
	// cin >> a[2];
	// cin >> a[3];
	// cin >> a[4];
	// cin >> a[5];

	// int i = 0;
	// while (i < n) {
	// 	cin >> a[i];
	// 	i = i + 1;
	// }

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = n - 1; i >= 0; i = i - 1) {
		cout << a[i] << " ";
	}

	// int i = 10;

	// while (i >= 1) {
	// 	cout << i << endl;
	// 	i = i - 1;
	// }

}











