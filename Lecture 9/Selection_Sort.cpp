#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 0; i <= n - 2; i = i + 1) {

		int minimum_element_index = i;

		for (int j = i + 1; j < n; j = j + 1) {

			if (a[j] < a[minimum_element_index]) {
				minimum_element_index = j;
			}
		}

		int temp = a[i];

		a[i] = a[minimum_element_index];

		a[minimum_element_index] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}










