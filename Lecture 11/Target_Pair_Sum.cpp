#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < n; j = j + 1) {
			if (a[i] + a[j] == target) {
				cout << a[i] << " " << a[j] << endl;
			}
		}
	}
	cout << endl << endl;
	//More Optimised:

	for (int i = 0; i <= n - 2; i = i + 1) {
		for (int j = i + 1; j <= n - 1; j = j + 1) {
			if (a[i] + a[j] == target) {
				cout << a[i] << " " << a[j] << endl;
			}
		}
	}

	cout << endl << endl;
	//Triplets

	for (int i = 0; i <= n - 3; i = i + 1) {
		for (int j = i + 1; j <= n - 2; j = j + 1) {
			for (int k = j + 1; k <= n - 1; k = k + 1) {
				if (a[i] + a[j] + a[k] == target) {
					cout << a[i] << " " << a[j] << " " << a[k] << endl;
				}
			}
		}
	}

}