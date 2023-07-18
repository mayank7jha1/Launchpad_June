#include<iostream>
using  namespace std;

void bubblesort(int* a, int index, int x) {

	if (index == x - 1) {
		return;
	}

	for (int j = 0; j < x - index - 1; j++) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	bubblesort(a, index + 1, x);
}


int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bubblesort(a, 0, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}