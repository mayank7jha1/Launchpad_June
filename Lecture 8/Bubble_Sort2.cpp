#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i <= n - 2; i = i + 1) {

		for (int j = 0; j <= n - i - 2; j = j + 1) {

			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}
	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}








