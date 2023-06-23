#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int target;
	cin >> target;
	int sum = 0;

	for (int i = 0; i < n; i = i + 1) {

		for (int j = i; j < n; j = j + 1) {

			sum = 0;

			for (int k = i; k <= j; k = k + 1) {
				sum = sum + a[k];
			}

			if (target == sum) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;
}









