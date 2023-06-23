#include<iostream>
using  namespace std;
#define int long long

int32_t main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int dpa[n + 1] = {0};
	int dsa[n] = {0};

	dpa[0] = 1;
	for (int i = 1; i < n; i++) {
		dpa[i] = dpa[i - 1] * a[i - 1];
	}

	// cout << endl;
	// cout << "Desired Prefix Array :" << endl;
	// for (int i = 0; i < n; i++) {
	// 	cout << dpa[i] << " ";
	// }

	//cout << endl << endl;

	dsa[n - 1] = 1;
	for (int i = n - 2; i >= 0; i = i - 1) {
		dsa[i] = dsa[i + 1] * a[i + 1];
	}

	// cout << "Desired Suffix Array :" << endl;

	// for (int i = 0; i < n; i++) {
	// 	cout << dsa[i] << " ";
	// }

	//cout << endl << endl;
	//cout << "Answer Array is: " << endl;
	int product[n];

	for (int i = 0; i < n; i++) {
		product[i] = dpa[i] * dsa[i];
	}

	for (int i = 0; i < n; i++) {
		cout << product[i] << " ";
	}
}




















