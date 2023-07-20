#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool flag = 0;

	for (int i = 0; i <= n - 2; i = i + 1) {
		flag = 0;
		for (int j = 0; j <= n - i - 2; j = j + 1) {

			if (a[j] > a[j + 1]) {

				flag = 1;
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}

		}
		if (flag == 0) {
			break;
		}

	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}








