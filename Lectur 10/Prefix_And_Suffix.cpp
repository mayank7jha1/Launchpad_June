#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}
	cout << "Normal Array:" << endl;
	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

	int pre[n + 1] = {0};

	// for (int i = 0; i <= n; i = i + 1) {
	// 	pre[i] = 0;
	// }

	pre[0] = a[0];
	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] * a[i];
	}
	cout << endl;
	cout << "Prefix Array:" << endl;
	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}

	cout << endl;

	int suffix[n] = {0};

	suffix[n - 1] = a[n - 1];

	for (int i = n - 2; i >= 0; i = i - 1) {
		suffix[i] = suffix[i + 1] * a[i];
	}

	cout << "Suffix Array: " << endl;

	for (int i = 0; i < n; i++) {
		cout << suffix[i] << " ";
	}
	cout << endl;

}




















