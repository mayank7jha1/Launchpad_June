#include<iostream>
using  namespace std;

void InsertionSort(int* a, int n) {

	for (int i = 1; i < n; i++) {
		int x = a[i];
		int j = i - 1;

		while (a[j] > x  and j >= 0) {
			a[j + 1] = a[j];
			j = j - 1;
		}

		a[j + 1] = x;
	}

}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	InsertionSort(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}





