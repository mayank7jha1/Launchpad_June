#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i = i + 1) {


		for (int j = 1; j <= i; j = j + 1) {
			cout << j << " ";
		}

		cout << endl;
	}

	cout << endl << endl;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int i = 1; i <= n; i = i + 1) {

		for (int j = 1; j < n - i + 1; j = j + 1) {
			cout << " ";
		}

		for (int j = n; j >= n - i + 1; j = j - 1) {
			cout << "*";
		}
		cout << endl;
	}

}





















