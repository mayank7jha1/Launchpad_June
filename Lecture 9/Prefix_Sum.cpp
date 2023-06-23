#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Normal Array

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	int pre[n + 1] = {0};

	// for (int i = 0; i <= n; i++) {
	// 	pre[i] = 0;
	// }

	pre[0] = a[0];

	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}
	cout << endl;
	//Sum of Range [2,4]
	cout << pre[4] - pre[1] << endl;
}










